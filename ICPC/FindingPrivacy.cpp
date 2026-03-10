#include<bits/stdc++.h>

using namespace std;

/*
    x-x n1
    x--x n2

    n1 + n2 = K - 1
    m = string size
    m = k + n1*1 + n2*2
    m = k + k - 1 + n2
    n2 = m - 2 * k + 1
    n1 = 3*k - m - 2
*/

bool solve(int n, int k)
{
    for(int m = n-2; m <= n; m++)
    {
        int n1 = 3*k - m -2, n2 = m - 2 * k + 1;
        if(n1 >= 0 && n2 >=0)
        {
            if(m < n) cout << '-';
            cout << 'X';
            for(int i = 0; i < n1;  i++)
            {
                cout << "-X";
            }
            for(int i = 0; i < n2;  i++)
            {
                cout << "--X";
            }
             if(m == n - 2) cout << '-';
             cout << '\n';
             return true;
        }
    }
    return false;
}


int main()
{
    int n, k;
    cin >> k >> n;
    if(!solve(n, k))
    {
        cout << "*\n";
    }

    return 0;
}