#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    vector<int> c(n);
    vector<int> v(n);
    for(int i  = 0; i < n; i++)
    {
        int ci, vi;
        cin >> ci >> vi;
        if(i == 0)
        {
            c[i] = ci;
            v[i] = vi;
        }
        else
        {
            c[i] = c[i-1] + ci;
            v[i] = v[i-1] + vi;
        }
    }

    int qtdq;
    cin >> qtdq;
    int sub;
    for(int i = 0; i < qtdq; i++)
    {
        int q;
        cin >> q;
        sub = c[q-1] - v[q-1];
        if(sub < 0)
        {
            cout << "VENDA\n";
        }
        else if( sub > 0)
        {
            cout << "COMPRA\n";
        }
        else
        {
            cout << "NEUTRO\n";
        }
    }
    return 0;
}