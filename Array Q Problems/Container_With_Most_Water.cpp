#include<bits/stdc++.h>
using namespace std;
int main()
{   int arr[]={1,5,4,3}, most_water=0,curr_water;
        int si = sizeof(arr) / sizeof(arr[0]);
        
     for (int i = 0; i <si; i++)
     {  
        for (int j = i+1; j < si; j++)
        {
            curr_water=min(arr[i],arr[j])*(j-i);
            if(curr_water>most_water)
            {
                most_water=curr_water;
            }
        }
        
     }
     cout<<most_water;
   return 0;
}