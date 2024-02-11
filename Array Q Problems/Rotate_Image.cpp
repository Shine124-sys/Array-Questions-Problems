#include<bits/stdc++.h>
using namespace std;
int main()
{  int arr[3][3]={
    {1,2,3},{4,5,6},{7,8,9}
};
  for (int j = 2; j >=0; )
  {
   
  
   for (int i = 0; i <=2; i++)
   {
     cout<<arr[i][j]<<" ";
   }
   j--;
   cout<<"\n";
  }
   return 0;
}