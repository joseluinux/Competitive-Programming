#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<size_t> hashes(n+1);
        hash<string> hasher;
        
        for(int i = 1; i<= n; i ++)
        {
            string s; cin >> s;
            hashes[i] = hasher(s); 
        }

        int q; cin >> q;
        while(q--)
        {
            int i, j; cin >> i >> j;
            cout << (hashes[i] == hashes[j] ? "SIM" : "NAO") << '\n';
        }
    }
    
    return 0;
}