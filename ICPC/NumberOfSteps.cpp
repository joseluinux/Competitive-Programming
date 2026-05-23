#include<bits/stdc++.h>

using namespace std;

#define MAXD 100100
#define MAXN 100100
bool light[MAXD];
int r[MAXD];
int cnt[MAXN]; //cnt[i] -> the number of prime numbers that have an answer equal to i
vector<int> pr[MAXD]; //pr[i] = list of prime numbers that divide i
void inc (int p, int k)
{
    cnt[r[p]] --;
    r[p] += k;
    cnt[r[p]]++;
}
int main()
{
    // Sieve of Eratosthenes
    for(int i = 2; i < MAXD; i++)
    {
        if(pr[i].size() == 0)
        {
            for(int j = i; j < MAXD; j+= i)
            {
                pr[j].push_back(i);
            }
        }
    }

    int n, k; cin >> n;
    int resp = 0;
    cnt[0] = n;
    for(int i = 0; i < n; i ++)
    {
        cin >> k;
        light[k] = !light[k];
        for(auto p : pr[k])
        {
            if(light[k])//increase
            {
                inc(p, 1);
                resp = max(resp, r[p]);
            }
            else//decrease
            {
                inc(p, -1);
            }
        }
        if(cnt[resp] == 0)
        {
            resp--;
        }
        cout << resp << '\n';
    }
}