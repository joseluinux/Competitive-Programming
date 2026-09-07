#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T; cin >> T;
    for(int k = 0; k < T; k++)
    {
        int n; cin >> n;
        int result = 0;
        vector<int> a(n);
        vector<int> b(n-1);
        for(int i = 0; i < n; i++)
            cin >> a[i];
        for(int i = 1; i < n; i++)
        {
            int bElement = 0;
            for(int j = i - 1; j >= 0; j--)
            {
                if(a[j] <= a[i])
                    bElement ++;
            }
            b[i-1] = bElement;
        }

        for(int i = 0; i < b.size(); i++)
            result += b[i];
        cout<<result<<endl;
    }
    return 0;
}