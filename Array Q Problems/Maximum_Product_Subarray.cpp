#include <bits/stdc++.h>
using namespace std;
int main()
{
    int list[] = {-2, 4, -1, 5, 7,-6};
    int size = sizeof(list) / sizeof(list[0]); // Size of Array list
    int max_so_far = 0, max_pre_val = 1;
    for (int i = 0; i < size; i++)
    {
        max_pre_val = max_pre_val * list[i];
        
        
        if (max_pre_val < 0)// condition for negative value ignore
        {
            max_pre_val = 1;
        }
        if (max_so_far < max_pre_val)  //Product of maximum value
        {
            max_so_far = max_pre_val;
        }
    }
    cout << "Product of Max Subarray :" << max_so_far;  //Print maximum product
    return 0;
}