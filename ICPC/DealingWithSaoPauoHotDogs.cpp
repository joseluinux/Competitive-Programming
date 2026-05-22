#include <bits/stdc++.h>
using namespace std;
#define MAXN 22
int n, m, p, s;
bool g[MAXN][MAXN];
bool selec[MAXN];
int resp;

bool check(int x)
{
    for(int i = 1; i<x; i ++)
    {
        if(selec[i] && g[i][x])
            return false;
    }
    return true;
}
void func(int x)
{
    if(x == n+1)
    {
        resp++;
        return;
    }
    //not adding x ingridient
    func(x+1);
    //adding x
    if(check(x))
    {
        selec[x] = true;
        func(x+1);
        selec[x] = false;
    }
}
int main()
{
    cin >> n >> m >> p >> s;
    int a, b;
    for(int i = 0; i < m; i++)
    {
        cin >> a >> b;
        g[a][b] = g[b][a] = true;
    }

    resp = 0;
    for(int i = 1; i <= p; i++)
    {
        selec[i] = true;
        for(int j=p+1; j <= p+s; j++)
        {
            if(!g[i][j])
            {
                selec[j] = true;
                func(p+s+1);
                selec[j] = false;
            }
        }
        selec[i]= false;
    }
    cout << resp << '\n';
}