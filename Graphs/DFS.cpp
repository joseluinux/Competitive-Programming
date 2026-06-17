#include<bits/stdc++.h>

using namespace std;
const int MAX = 1e5+10;

vector<int> g[MAX];
vector<bool> vis(MAX);

void dfs(int v)
{
    vis[v] = true;
    for(auto w : g[v])
    {
        if(!vis[w])
        {
            dfs(w);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m; cin >> n >> m;
    for(int k = 0; k < m; k++)
    {
        int i, j; cin >> i >> j; i --, j --;
        g[i].push_back(j);
        g[j].push_back(i);
    }

    int times = 0;
    for(int i = 0; i < n; i ++)
    {
        if(!vis[i])
        {
            dfs(i);
            times++;
        }

    }
    cout << times << '\n';    
    return 0;
}