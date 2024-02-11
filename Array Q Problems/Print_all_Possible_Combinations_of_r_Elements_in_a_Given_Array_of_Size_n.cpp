#include<bits/stdc++.h>
using namespace std;
int main()
{    int arr[]={1,2,3,4};
     int si= sizeof(arr) / sizeof(arr[0]); // Size of Array list
     cout<<" All possible combinations are :(in pair)"<<endl;
      for (int  i = 0; i <si; i++)
      {
            for (int j = 0; j < si; j++)
            {
               if(arr[i]!=arr[j])
               {
                    cout<<arr[i]<<" "<<arr[j]<<endl;
               }

            }
            
      }
      
   return 0;
}