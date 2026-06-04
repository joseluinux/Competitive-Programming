#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unordered_map<int, string> rgbMap = {
        {0, "Preto"}, {1, "Azul"}, {2, "Verde"},
        {3, "Ciano"}, {4, "Vermelho"}, {5, "Rosa"},
        {6, "Amarelo"}, {7, "Branco"}
    };
    
    int t;
    cin >>t;
    for(int i = 0; i < t; i ++)
    {
        int r, g, b, count = 0;
        cin >> r >> g >> b;
        if(r == 1) count += 4;
        if(g == 1) count += 2;
        if(b == 1) count += 1;
        cout << rgbMap[count] << '\n';
    }
    return 0;
}