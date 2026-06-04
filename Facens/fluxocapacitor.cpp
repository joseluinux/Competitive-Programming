#include<bits/stdc++.h>

using namespace std;
#define MAXM 110
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<long long int> fibo(MAXM);
    fibo[0] = fibo[1] = 1;
    for(int i = 2; i < MAXM; i++)
    {
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
    int t; 
    cin >> t;
    for(int i = 0; i < t; i ++)
    {
        bool sure = false, first = true;
        int m, n; cin >> m >> n;
        if(m < n && (m >= 0 && m <= 100) && (n >= 0 && n <= 100)){
            for(int j = m; j <= n; j++)
            {
                if(!binary_search(fibo.begin(), fibo.end(), j)){
                    if(!first) cout << " ";
                    cout << j;
                    first = false
                    sure = true;
                }               
            }
            if(sure == false) cout << "ERRO";
            cout << '\n';
        }
        else{
            cout << "ERRO" << '\n';
        }
    }
    return 0;
}