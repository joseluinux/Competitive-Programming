#include<bits/stdc++.h>

using namespace std;

long long combination(int n, int p)
{
    long long result = 1;
    for(int i =0; i < p; i++)
    {
        result *= (n-i);
        result /= (i+1);
    }
    return result;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    for(int i = 0; i < n; i ++)
    {
        int p, s; cin >> p >> s;
        int k = s+s*(s-1)/2; // k =  pizzas distintas
        cout << combination(k+p-1, p) << '\n';
    }
    return 0;
}