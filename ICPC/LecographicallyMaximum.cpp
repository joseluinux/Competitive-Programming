#include <bits/stdc++.h>

using namespace std;
#define BITS 30
int cont[BITS];
int main()
{
    int n, k; cin >> n;

    for(int i = 0; i < n; i ++)
    {
        cin >> k;
        for(int j = 0; (1<<j) <= k; j ++)
        {
            cont[j] += ((1 << j) & k) ? 1 : 0;
        }
    }
    int next;
    for(int i = 0; i < n; i ++)
    {
        next = 0;
        for(int j = 0; j < BITS; j ++)
        {
           if(cont[j] > 0)
           {
                next = next | (1<<j);
                cont[j] --;
           } 
        }
        cout << next << ((i == n - 1) ? '\n' : ' ');
    }
    return 0;
}