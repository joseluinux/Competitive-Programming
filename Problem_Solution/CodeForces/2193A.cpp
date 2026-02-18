#include<bits\stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    for(int i = 0; i < t; i ++)
    {
        float count = 0, arrsum = 0;
        int n, s, x;
        cin >> n >> s >> x;
        vector<int> a(n);
        for(int j = 0; j < n; j++)
        {
            cin >> a[j];
            arrsum += a[j];
        }

        count = (s-arrsum)/x;
        int icount = (int)count;

        if(count != icount || count < 0)
        {
            cout << "no" << endl;
        }
        else
        {
            cout << "yes" << endl;
        }
    }
}