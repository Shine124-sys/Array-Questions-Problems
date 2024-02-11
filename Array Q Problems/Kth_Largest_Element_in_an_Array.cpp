#include<bits/stdc++.h>
using namespace std;
int main()
{   
   int list[]={10,5,4,3,48,6,2,33,53,10};
   int key=4;
   int si= sizeof(list) / sizeof(list[0]); // Size of Array list
   sort(list,list+si);
   cout<<"Kth largest element is :"<<list[key-1];
     
   
    return 0;
}