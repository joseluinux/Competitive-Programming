#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int c;
    cin >> c;
    for(int i = 0; i < c; i++)
    {
        unordered_set<string> seen;
        int n;
        cin >> n;
        for(int j = 0; j < n; j++)
        {
            string s; cin >> s;
            if(seen.count(s)) seen.erase(s);
            else seen.insert(s);
        }
        cout << *seen.begin() << '\n';
    }
    return 0;
}