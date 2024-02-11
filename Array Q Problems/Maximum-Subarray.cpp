#include <bits/stdc++.h>
using namespace std;
int main()
{
    int list[] = {-2, 4, -1, 5, 7, -4, -1};
    int size = sizeof(list) / sizeof(list[0]); // Size of Array list
    int max_so_far = INT_MIN, max_pre_val = 0;
    for (int i = 0; i < size; i++)
    {
        max_pre_val = max_pre_val + list[i];
        if (max_so_far < max_pre_val)
        {
            max_so_far = max_pre_val;
        }
        if (max_pre_val < 0)
        {
            max_pre_val = 0;
        }
    }
    cout << "Sum of Max Subarray :" << max_so_far;
    return 0;
}