#include <bits/stdc++.h>

using namespace std;

#define MAXN 12//1001000
// 1 to M -> actors
// M+1 to M+N -> movies
int n, m;

vector<int> l[MAXN];

bool marc[MAXN];
int parent[MAXN];

void dfs(int x)
{
    marc[x] = true;
    for(auto y: l[x])
    {
        if(!marc[y])
        {
            parent[y] = x;
            dfs(y);
        }
    }
}

int id(int x)
{
    return x > m ? x-m : x;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    int k, x;

    for(int i  = 1; i <n+m; i++)
    {
        l[i].clear();
        marc[i] = false;
    }

    for(int i = 1; i <= n; i ++)
    {
        cin >> k;
        for(int j=0; j < k; j++)
        {
            cin >> x;
            l[i + m].push_back(x);
            l[x].push_back(i + m);
        }

    }

    for(int i  = 1; i <n+m; i++)
    {
        if(!marc[i])
        {
            parent[i] = -1;
            dfs(i);
        }
    }

    int q, a, b;
    vector<int> va, vb;
    cin >> q;
    
    for(int i = 0; i < q; i ++)
    {
        cin >> a >> b;
        va.clear();
        for(int x = a; x != -1; x=parent[x])
            va.push_back(x);
        vb.clear();
        for(int x = b; x != -1; x=parent[x])
            vb.push_back(x);
        
        if(va.back() != vb.back())
        {
            cout << "-1\n";
        }
        else{
            while(va.size() > 1 && vb.size() > 1 && va[va.size() -2] == vb[vb.size() -2])
            {
                va.pop_back();
                vb.pop_back();
            }
            cout << (va.size() + vb.size())/2 << '\n';
            for(auto x: va)
            {
                cout << id(x) << ' ';
            }
            for(int j = vb.size() -2; j>=0; j--)
            {
                cout << id(vb[j]) << (j == 0 ? '\n' : ' ');
            }
        }
    }
    return 0;
}