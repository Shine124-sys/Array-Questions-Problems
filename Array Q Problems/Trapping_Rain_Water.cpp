#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={ 3,0,2,0,4};
    int si= sizeof(arr) / sizeof(arr[0]); // Size of Array list
    vector<int>left;
    vector<int>right;
    int beg=arr[0],last=arr[si-1];
    for (int i = 0; i < si; i++)
    {   
       if(beg>arr[i])
       {
        left.push_back(beg);
       }
       else
       {
           left.push_back(arr[i]);
       }
    }
    for (int i = 0; i < si; i++)
    {   
       if(last>arr[i])
       {
        right.push_back(last);
       }
       else
       {
           right.push_back(arr[i]);
       }
    }
    int sum=0;
     for (int i = 0; i < si; i++)
     {
          sum+=min(left[i],right[i])-arr[i];
     }
     cout<<"Total Water :"<<sum;
    return 0;
}