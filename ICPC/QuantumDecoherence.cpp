#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; 
    cin >> n;
    string S, T;
    cin >> S;
    cin >> T;

    float sQubit = 0, tQubit = 0;
    for(int i = 0; i < n; i ++)
    {
        if(S[i] == '*')
            sQubit ++;
        if(T[i] == '*')
            tQubit ++;
    }

    printf("%.2f\n", (1 - (tQubit/sQubit)));
    return 0;
}