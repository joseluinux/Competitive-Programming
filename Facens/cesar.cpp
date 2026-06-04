#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    for(int i = 0; i < t; i ++)
    {
        int n; cin >> n;
        vector<int> l(n); 
        for(int j = 0; j < n; j++)
        {
            cin >> l[j];
        }
        vector<int> sorted_l = l;
        sort(sorted_l.begin(), sorted_l.end());
        for(int j = 0; j < n; j ++)
        {
            int count = lower_bound(sorted_l.begin(), sorted_l.end(), l[j]) - sorted_l.begin();
            if(j == n-1) cout << count << '\n';
            else cout << count << ' ';
        }
    }
    return 0;
}