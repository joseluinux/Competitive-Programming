#include<bits/stdc++.h>

using namespace std;

const int MAX = 1e4+10;
vector<int> g[MAX];
int dist[MAX];

void dfs(int v)
{
    for(auto w : g[v])
    {
        if(dist[w] == -1)
        {
            dist[w] = dist[v] +1;
            dfs(w);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    for(int i = 0; i < n-1; i ++)
    {
        int u, v; cin >> u >> v; u --, v --;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    memset(dist, -1, sizeof(dist));
    dist[0]=0;
    dfs(0);

    int pos = -1, distMax = -1;
    for(int i = 0; i < n; i++)
    {
        if(dist[i] > distMax)
        {
            distMax = dist[i];
            pos = i;
        }
    }
    memset(dist, -1, sizeof(dist));
    dist[pos] = 0;
    dfs(pos);

    int longestPath = 0;
    for(int i = 0; i < n; i ++) longestPath = max(longestPath, dist[i]);
    cout << longestPath << '\n';
    return 0;
}