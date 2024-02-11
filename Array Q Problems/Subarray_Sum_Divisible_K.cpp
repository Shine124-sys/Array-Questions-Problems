#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {2, 7, 6, 1, 4, 5}, k = 3;
    int si = sizeof(arr) / sizeof(arr[0]);
    int count = 0, sum = 0;
    for (int i = 0; i < si; i++)
    {
        for (int j = i; j < si; j++)
        {
            if (arr[i] != arr[j])
            {
                sum +=arr[j];
                if (sum % k == 0)
                {
                    count++;
                    sum=0;
                }
            }
        }
    }
    cout << count;
    return 0;
}