#include <bits/stdc++.h>
using namespace std;
int main()
{
    int list[] = {7, 3, 2, 4, 9, 12, 56};
    int n = sizeof(list) / sizeof(list[0]);
    int m = 3, min_diff = INT_MAX;
    sort(list, list + n);
    for (int i = 0; i + m-1< n; i++)
    {
        int diff = list[i+m-1] - list[i];
        if (diff < min_diff)
        {
            min_diff = diff;
        }
    }
    cout << min_diff;
    return 0;
}