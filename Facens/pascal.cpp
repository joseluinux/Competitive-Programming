#include <bits/stdc++.h>

using namespace std;

long long fatorial(int n)
{
    if(n < 0)
        return 0;
    if(n == 0 || n == 1)
        return 1;
    return n * fatorial(n-1);
}

long long binomial_number(int n, int p)
{
    return fatorial(n) / (fatorial(p) * fatorial(n - p));
}

void pascal(int n)
{
    for(int i = 0; i <= n; i ++)
    {
        for(int j = 0; j <= i; j++)
        {
            if(j > 0) cout << " ";
            cout << binomial_number(i, j);
        }

        cout << " => ";
        for(int j = 0; j <= i; j++)
        {
            if(j > 0) cout << " + ";
            cout << binomial_number(i, j) << "*(A^" << i-j << "*B^" << j << ")";
        }
        cout << "\n";
    }
}

int main()
{
    int n;
    while(cin >> n && n != -1)
    {
       pascal(n-1); 
    }
    return 0;
}