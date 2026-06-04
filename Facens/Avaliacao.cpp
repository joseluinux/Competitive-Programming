#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t; 
    for(int i = 0; i < t; i++)
    {
        float a, b, c, d, e;
        cin >> a >> b >> c >> d;
        printf("%.2f\n", (a+b+c+d)/4);
    }
    return 0;
}