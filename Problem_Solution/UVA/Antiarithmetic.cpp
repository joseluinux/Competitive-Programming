#include <bits/stdc++.h>

using namespace std;

int N;
unordered_map<int, int> Seen;

bool solve(vector<int> &arr)
{
    for(int i = 0; i < N; i ++)
    {
        for(int j = i+1; j < N; j++)
        {
            int next_ = arr[j] + arr[j] - arr[i];
            if(next_ >= 0 && next_ < N && j < N-1)
            {
                if(Seen.count(next_) && Seen[next_] > j)
                    return false;
            }
        }
    }
    return true;
}

int main()
{
    while(scanf("%d: ", &N), N)
    {
        vector<int> arr(N);
        for(int i = 0; i < N; i ++)
        {
            cin >> arr[i];
            Seen[arr[i]] = i;
        }

        if(solve(arr))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
}