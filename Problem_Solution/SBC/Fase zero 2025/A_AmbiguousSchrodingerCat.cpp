#include <bits/stdc++.h>

using namespace std;

int main()
{
    int C, G; cin >> C >> G;

    if(C == 1)
    {
        cout << "vivo e morto" << endl;
    }
    else if(C == 0)
    {
        if(G == 0)
        {
            cout << "morto" << endl;
        }
        else if(G == 1)
        {
            cout << "vivo" << endl;
        }
    }
}