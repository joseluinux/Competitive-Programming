#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, end; 
    while(scanf("%d", &a) == 1)
    {

        if(a == 0)
            break;
        scanf("%d", &b);
        vector<int> front(a);
        vector<int> rear(b);
        vector<double> ratio;
        double result = 0;
        for(int i = 0; i < a; i ++)
            cin >> front[i];
        for(int i = 0; i < b; i ++)
            cin >> rear[i];  
            
        for(int i = 0; i < a; i ++)
        {
            for(int j = 0; j < b; j ++)
            {
                ratio.push_back((double)rear[j]/(double)front[i]);
            }
        }

        sort(ratio.begin(), ratio.end());
        for(int i = 0; i < ratio.size() - 1; i++)
        {
            result = max((ratio[i+1]/ratio[i]), result);
        }
        printf("%.2f\n", result);
    }


    return 0;
}