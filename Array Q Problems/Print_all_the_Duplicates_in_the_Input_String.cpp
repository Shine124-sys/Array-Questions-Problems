#include<bits/stdc++.h>
using namespace std;
int main()
{   string str="Hello welcome";
   unordered_map<char,int>count;
    for (size_t i = 0; i <str.length(); i++)
    {
       count[str[i]]++;
    }
    for(auto it:count)
    {
        if(it.second>1)
        {
            cout<<it.first<<"-"<<it.second<<endl;
        }
    }
   return 0;
}