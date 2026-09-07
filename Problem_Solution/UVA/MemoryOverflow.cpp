#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    int n, k, recog;
    string names;
    char meet;
    map<char, int> _map;

    for(int i = 1; i <= t; i ++)
    {
        cin >> n >> k >> names;
        recog = 0;

        
        for(int j = 0; j < n; j ++)
        {
            meet = names[j];
            if(_map[meet] > 0)
                recog ++;

            for(auto it = _map.begin(); it != _map.end(); it ++)
                _map[it->first]--;
            _map[meet] = k;
        }
        printf("Case %d: %d\n",i, recog);
        _map.clear();
    }
}