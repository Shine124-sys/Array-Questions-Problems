#include<bits/stdc++.h>
using namespace std;
struct Interval{
      int left,right;
};
bool mycom(Interval a,Interval b)
{
   return a.left<b.left;
}
void mergeIn(Interval interval[],int si)
{
      sort(interval,interval+si, mycom);
       int index=0;
       for (int  i =1; i <si; i++)
       {
         if(interval[index].right>=interval[i].left)
         {
            interval[index].right=max(interval[index].right,interval[i].right);
         }
         else{
                index++;
                interval[index]=interval[i];
         }
       }
       cout<<"Intervals are :\n";
       for (int i = 0; i <=index; i++)
       {
            cout<<"[ "<<interval[i].left<<","<<interval[i].right<<"]"<<endl;
       }
       
}
int main()
{    Interval interval[]={{6,8},{1,9},{2,4},{4,7}};
      int si = sizeof(interval) / sizeof(interval[0]);
      mergeIn(interval,si);
   return 0;
}