#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, resp = 0; cin >> n;
    vector<long long> fibo(n+1);
    fibo[0] = 1;
    fibo[1] = 1;
    if(n <= 1)
    {
        cout << 1 << endl;
    }
    else
    {
        for(int i = 2; i <= n; i ++)
        {
            fibo[i] = fibo[i-1] + fibo[i-2]; 
            resp = fibo[i];
        }
        cout << resp << endl;
    }
}