#include <bits/stdc++.h>

using namespace std;

bool isInside(int x, int y)
{
    if(y == 0)
        return x >= -200 && x <= 200;
    if(y < 0)
    {
        x*=-1;
        y*=-1;
    }
    return y <= 100 && x+y <= 100 && y-x <= 200;
}

int main(){
    int N, x, y; cin >> N;
    for(int i = 0; i < N; i ++)
    {
        cin >> x >> y;
        cout << (isInside(x, y) ? 'S' : 'N') << '\n';
    }

}