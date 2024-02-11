#include<bits/stdc++.h>
using namespace std;
int main()
{   
     int arr[]={1,4,5,9,1};
     int si = sizeof(arr) / sizeof(arr[0]);
     int count=0;
     for (int i = 0,j=si-1; i <si; )
     {
         if(arr[i]==arr[j])
         {
              i++;
              j--;
         }
         else if(arr[i]<arr[j])
         {
              arr[i]+=arr[i+1];
            
              count++;
         }
         else
         {
           arr[j]+=arr[j-1];
             
              count++;
         }
     }
     cout<<count;
   return 0;
}