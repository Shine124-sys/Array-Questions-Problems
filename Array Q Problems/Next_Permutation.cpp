#include<bits/stdc++.h>
using namespace std;
int main()
{   
   int number=123;
    vector<int>arr;
     
     while (number>0)
     {
        
        arr.insert(arr.begin(), number % 10); 
        number=number/10;
     }
     
   for (int digit: arr) {
        cout << digit<< " ";
    }
   next_permutation(arr.begin(),arr.end());
     for (int digit: arr) {
        cout << digit<< " ";
    }
   
    return 0; 
}