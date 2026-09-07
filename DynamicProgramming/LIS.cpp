#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> A({-7, 10, 9, 2, 3, 8, 8, 1, 2, 3, 4, 1});

int LIS(int i) {                                 
  if (i == 0) return 1;                  
  int ans = 1;
  for (int j = 0; j < i; ++j)                    
    if (A[j] < A[i])                             
      ans = max(ans, LIS(j)+1);                  
  return ans;
}

int main()
{
    n = A.size();

    cout << "n = " << n << ": ";
    for (int i = 0; i < n; ++i)
        cout << A[i] << " ";
    cout << endl;

    cout << "LIS length is "<< LIS(n-1) << "\n\n";
}