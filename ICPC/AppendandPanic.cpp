#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s; cin >> s;
    unordered_map<char, char> smap;
    sort(s.begin(), s.end());

    for(auto dig : s)
    {
        if(!smap.count(dig))
            smap[dig] = dig;
    }

    cout << s.size() - smap.size() << "\n";
    return 0;
}