#include<bits/stdc++.h>
using namespace std;
int main()
{   
    vector<int>prices{7,4,5,3,6,4,9};
    int si=prices.size();
    int buy,max_profit=0,curr_profit=0;
    buy=prices[0];
    for (int i = 0; i < si; i++)
    {
          if(buy>prices[i])
          {  
            buy=prices[i];

          }
          else if(prices[i]-buy>max_profit)
          {
            max_profit=prices[i]-buy;
            
          }
         
    }
    cout<<"Max Profit :"<<max_profit;
    
    return 0;
}