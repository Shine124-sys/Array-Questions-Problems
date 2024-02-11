#include<bits/stdc++.h>
using namespace std;
struct query
{
    int L,R;
};
int main()
{
   int arr[]={1,1,2,1,3,4,5,2,8};
   int si= sizeof(arr) / sizeof(arr[0]); // Size of Array list
   query q[]={{0,4},{1,3},{2,4}};
   int n= sizeof(q) / sizeof(q[0]); // Size of query list
    
  for (int  i = 0; i <n; i++)
  {
       int L=q[i].L,R=q[i].R;
       int sum=0;
       for (int  i = L; i <= R; i++)
       {
           sum+=arr[i];
       }
        cout<<"Sum between "<<L<<" and "<<R<<" is :"<<sum<<endl;
  }
  

}