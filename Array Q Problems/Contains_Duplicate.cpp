#include<bits/stdc++.h>
using namespace std;
int main()
{    
    int list[]={1,2,3,4,4,5,3,9,9,7,5};
    vector<int>duplicates;
    int size = sizeof(list) / sizeof(list[0]); // Size of Array list
    for (int  i = 0; i <size; i++)
    { 
      int pos=list[i];
      for (int  j =i+1; j <size ; j++)
      {
         if(pos==list[j])
         {
            duplicates.push_back(list[j]);
         }
      }
      
        
    }
    if(duplicates.size()==0)
    {
        cout<<"No duplicates value present in given list";
    }
    else
    {   cout<<"Duplicate Values are:";
        for (int  i = 0; i <duplicates.size(); i++)
        {
            cout<<duplicates[i]<<"\t";
        }
        
    }
    return 0;
}