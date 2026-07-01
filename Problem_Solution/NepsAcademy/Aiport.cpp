#include<bits/stdc++.h>

using namespace std;
#define MAXA 110

vector<int> adj[MAXA];
bool visited[MAXA];

int dfs(int n)
{
    visited[n] == true;
    int grau = 0;
    for(auto vis : adj[n])
    {
        grau ++;
    }
    return grau;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, v, caso = 1;
    while(cin >> a >> v && a != 0  && v != 0)
    {
        for(int i = 1; i <= a; i++)
        {
            adj[i].clear();
            visited[i] = false;
        }
        for(int i = 0; i < v; i ++)
        {
            int n1, n2; cin >> n1 >> n2;
            adj[n1].push_back(n2);
            adj[n2].push_back(n1);
        }
        vector<int> grau(a+1, 0);
        for(int i = 1; i <= a; i ++) {
            if(!visited[i]) {
                grau[i] = dfs(i);
            }
        }

        int maxGrau = 0;
        for(int i = 1; i <= a; i++)
        {
            maxGrau = max(maxGrau, grau[i]);
        }

        cout << "Teste " << caso++ << '\n';
        bool primeiro = true;
        for(int i = 1; i <= a; i++){
            if(grau[i] == maxGrau){
                if(!primeiro) cout << " ";
                cout << i;
                primeiro = false;
            }
        }
        cout << "\n\n";
    }
    return 0;
}