#include <bits/stdc++.h>
using namespace std;

int findpivot(int list[], int first, int size,int key) {
    int beg = first, last = size, mid;
    if (beg < last) {
        mid=(beg+last)/2;
        if( list[mid]==key)
        {
           return mid;
        }
        if(list[beg]<=list[mid])
         {
            if(key>=list[beg] && key<=list[mid])
            {
               return findpivot(list, beg,mid-1,key);
            }
            return findpivot(list, mid+1,last,key);
         }
          
            if(key>=list[mid] && key<=list[last])
            {
               return findpivot(list, mid+1,last,key);
            }
           return findpivot(list, beg,mid-1,key);
    }
     else 
     {
      return -1;
     }
}

int main() {
    int list[] = {4, 5, 6, 7, 8, 1, 2, 3};
    int size = sizeof(list) / sizeof(list[0]);
    int key = 6, pivot;
    pivot= findpivot(list, 0, size - 1,key);
    if(pivot==-1)
    {
      cout<<" Element is not found";
    }
    else{
      cout<<"Element is found at"<<pivot;
    }
    return 0;
}
