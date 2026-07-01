#include<bits/stdc++.h>

using namespace std;
#define MAXN 2 * 100100
vector<int> adj[MAXN];
bool visited[MAXN];
stack<int> st;

void dfs(int n)
{
    visited[n] = true;
    for(int i : adj[n])
    {
        if(!visited[i])
        {
            dfs(i);
        }
    }
    st.push(n);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, k;
    cin >> n >> m;
    for(int i = 0; i < m; i++)
    {
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    int cnt = 0;
    for(int i = 1; i <= n; i++)
    {
        if(!visited[i])
            dfs(i);
        k=1;
        if(st.size() > 2)
        {
            while(!st.empty())
            {
                if(adj[st.top()].size() != 2)
                {
                    k = 0;
                    break;
                }
                st.pop();
            }
            if(k)
                cnt++;
        }

        while(!st.empty())
            st.pop();
    }
    cout << cnt << '\n';
    return 0;
}