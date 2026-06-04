#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    

    int t;
    cin >> t;
    for(int i  =0; i < t; i ++)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        int q;
        cin >> q;
        if(binary_search(a.begin(), a.end(), q))
            cout << "Está na brincadeira." << '\n';
        else
            cout << "Não está na brincadeira." << '\n';
    }
    return 0;
}