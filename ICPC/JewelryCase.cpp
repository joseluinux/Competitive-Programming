#include <bits/stdc++.h>

using namespace std;
int n;

#define matrix vector<vector<int>> 
#define mkp make_pair


//this problem has two viable solutions. The first one has higher complexity, so only use it if you want to know how to rotate a matrix. 
//the second one is easier and faster(in terms of implementation), so if some problem like this appears in a contest, use this solution.
bool Verify(matrix  const &m)
{
    for(int i  = 0; i+ 1 < n; i++)
    {
        for(int j = 0; j + 1 < n; j ++)
        {
            if(m[i][j] >= m[i+1][j] || m[i][j] >= m[i][j+1])
            {
                return false;
            }
        }
    }
    return true;
}

void rotate (matrix &m)
{
    matrix aux;
    aux.resize(n);
    for(int i = 0; i < n; i ++)
    {
        aux[i].resize(n);
    }
    for(int i = 0; i < n; i ++)
    {
        for(int j = 0; j < n; j++)
        {
            aux[n - j - 1][i] = m[i][j];
        }
    }
    m = aux;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    matrix m;
    cin >> n;
    m.resize(n);
    for(int i = 0; i < n; i++)
    {
        m[i].resize(n);
        for(int j = 0; j < n; j ++)
        {
            cin >> m[i][j];
        }
    }

    int result = 0;
    while(!Verify(m))
    {
        rotate(m);
        result++;
    }

    cout << result << endl;
    return 0;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    matrix m;
    cin >> n;
    m.resize(n);
    for(int i = 0; i < n; i++)
    {
        m[i].resize(n);
        for(int j = 0; j < n; j ++)
        {
            cin >> m[i][j];
        }
    }

    vector<pair<int, int>> pos = {
        mkp(0, 0),
        mkp(0, n-1),
        mkp(n-1, n-1),
        mkp(n-1, 0)
    };
    
    int result = 0, a, b;
    for(int i = 0; i < 4; i ++)
    {
        a = m[pos[result].first][pos[result].second];
        b = m[pos[i].first][pos[i].second];
        if(b < a)
        {
            result = i;
        }
    }

    cout << result << endl;
    return 0;
}