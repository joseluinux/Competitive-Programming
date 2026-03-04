#include <bits/stdc++.h>

using namespace std;

string m, n, resp;

int extract_bit(int &mask)
{
   int ret = mask%2;
   mask /= 2;
   return ret;
}

bool verif(int mask)
{
   int mod = 0;
   for(auto dig : n)
   {
      mod = mod * 2 + (dig == '*' ? extract_bit(mask) : dig - '0');
   }
   int resto = 0, bit;
   for(int i = 0; i < m.size() ; i++)
   {
      bit = (m[i] == '*') ? extract_bit(mask) : (m[i] - '0');
      resp[i] = bit + '0';
      resto = (resto*2 + bit) % mod;
   }
   return resto == 0;
}
int main()
{
   cin >> m >> n;
   resp = m;
   int cnt = 0; 
   for(int i = 0; i < m.size(); i++)
   {
      if(m[i] == '*') cnt++;
   }
   for(int i = 0; i < n.size(); i++)
   {
      if(n[i] == '*') cnt++;
   }
   int lim_mask = 1 << cnt;

   for(int mask = 0; mask < lim_mask; mask ++)
   {
      if(verif(mask))
      {
         cout << resp << "\n";
         break;
      }
   }
   return 0;
}