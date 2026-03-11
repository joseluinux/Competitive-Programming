#include<bits/stdc++.h>

using namespace std;

unordered_map<char, char> smap = {{'A', '@'}, {'S', '$'}, {'E', '3'}, {'I', '!'}, {'O', '0'}, {' ', '#'}};
int main()
{
    int N;
    string s;

    while(cin >> N && N != 0)
    {
        cin.ignore();
       getline(cin, s);
        if(N > 20 || s.size() > 51 || N < 1 || s.size() < 1)
        {
            cout << "ERROR" << endl;
            continue;
        }

        for(char a : s)
        {
            if(smap.find(a) != smap.end())
                cout << smap[a];
            else 
                cout << (char)((a-'A' + N) % 26 + 'A');
            
        }
        cout << endl; 
    }
    return 0;
}