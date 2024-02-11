#include<bits/stdc++.h>
using namespace std;
int main()
{      int arr[]={0,-1,2,-3,1},x=-2,count=0;
       int si = sizeof(arr) / sizeof(arr[0]);
       for (int i = 0; i <si; i++)
       {
        for (int j = i+1; j <si; j++)
        {
             if(arr[i]+arr[j]==-2)
             {
                 count++;
             }
        }
        
       }
        if(count>=1)
        {
            cout<<" Yes";
        }
        else
        {
            cout<<" No";
        }
   return 0;
}