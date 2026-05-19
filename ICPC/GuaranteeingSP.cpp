#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<string, char> resp;
    //B?-SP, ?R-SP, BR?SP = S
    //BR-S?, BR-?P
    resp["?R-SP"] = resp["B?-SP"] = resp["BR?SP"] = 'S';
    resp["BR-S?"] = resp["BR-?P"] = 'T';
    string s; cin >> s;
    cout << (resp.count(s) == 0 ? 'N' : resp[s]); 
    return 0;
}