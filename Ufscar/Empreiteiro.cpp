#include<bits/stdc++.h>

using namespace std;

int mdc(int a, int b){
    while(b){
        a%=b;
        swap(a,b);
    }
    return a;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int x, y;
    while(cin >> x >> y && x !=0 && y != 0)
    {
        //cout << gcd(x, y) << '\n';
        //cout << __gcd(x,y) << '\n';
        cout << mdc(x, y) << '\n';
    }
    return 0;
}