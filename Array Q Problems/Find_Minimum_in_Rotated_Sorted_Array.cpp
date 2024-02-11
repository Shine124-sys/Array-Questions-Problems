#include<bits/stdc++.h>
using namespace std;
 int binarysearch(int arr[],int beg ,int last)
 {       int mid;
       while (beg<=last)
       {
          mid=(beg+last)/2;
           if(mid-1>=0 &&  arr[mid]<arr[mid-1])
           {
               return arr[mid];


           }
           else if(arr[mid]>arr[last])
           {
                beg=mid+1;
           }
           else{
                last=mid-1;
           }
       }
       

      
 }
int main()
{   int arr[]={4,5,6,7,8,1,2,3};
int si = sizeof(arr) / sizeof(arr[0]);
 cout<< binarysearch(arr,0,si-1);
   return 0;
}