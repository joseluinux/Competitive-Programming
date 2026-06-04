#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    for(int i = 0; i < t; i ++)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> a(n);
        for(int j = 0; j < n; j++)
        {
            int t, p;
            cin >> t >> p;
            a[j] = make_pair(t, p);
        }
    }
    return 0;
}