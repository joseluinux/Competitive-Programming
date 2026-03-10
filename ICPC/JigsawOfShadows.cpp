#include<bits/stdc++.h>

using namespace std;
#define mkp make_pair

vector<pair<double, int>> v;

int main()
{
    double pi = acos(-1);
    int ang, n, x, h;
    double len;
    cin >> ang >> n;
    for(int i = 0; i < n; i ++)
    {
        cin >> x >> h;
        len = h / tan(ang * pi / 180);
        v.push_back(mkp(x, 1));
        v.push_back(mkp(x + len, -1));
    }
    sort(v.begin(), v.end());
    cout << '\n';
    int count = 0;
    double result = 0;
    for(int i = 0; i < v.size(); i++)
    {
        if(count > 0)
        {
            result += v[i].first - v[i - 1].first;
        }
        count += v[i].second;
    }
    cout << std::setprecision(14) << result << '\n';
    return 0;
}