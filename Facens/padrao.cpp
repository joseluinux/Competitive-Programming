#include<bits/stdc++.h>

using namespace std;

bool isAlphaNum(string s)
{
    if(s.empty()) return false;
    else   
        for(char c : s)
        {
            if(!isalnum(c)) return false;
        }
    return true;
}

bool isInteger(string s)
{
    if(s.empty()) return false;
    else   
        for(char c : s)
        {
            if(!isdigit(c)) return false;
        }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    cin.ignore();
    for(int i = 0; i < n; i++)
    {
        string linha;
        getline(cin, linha);

        vector<string> partes;
        string token;
        stringstream ss(linha);
        while(getline(ss, token, '/'))
            partes.push_back(token);

        if(partes.size() == 3 &&
            isAlphaNum(partes[0]) &&
            isInteger(partes[1]) &&
            isAlphaNum(partes[2]))
            cout << "Segue o padrao\n";
        else
            cout << "Nao segue o padrao\n";
    }
    return 0;
}