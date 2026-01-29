#include <bits\stdc++.h>

using namespace std;

int T, N, tot;
vector<int> peg(100, 0);

void Backtracking(int v, int p)
{
    if(p == N) return;
    if(peg[p] == 0)
    {
        peg[p] = v;
        tot ++;
        return Backtracking(v+1, p);
    }

    for(int i = 0; i <= p; i ++)
    {
        int root = (int) sqrt(peg[i] + v);
        if(root * root == peg[i] + v)
        {
            peg[i] = v;
            tot ++;
            return Backtracking(v + 1, p);
        }
    }

    Backtracking(v + 1, p);
}

int main()
{
    scanf("%d", &T);
    while(T--)
    {
        scanf("%d", &N);
        tot = 0;
        Backtracking(1, 0);
        printf("%d\n", tot);
    }
}