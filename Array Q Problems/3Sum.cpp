#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {12, 3, 4, 1, 6, 9};
    int k = 24;
    int si = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < si - 2; i++) {
        for (int j = i + 1; j < si - 1; j++) {
            for (int l = j + 1; l < si; l++) {
                int sum = arr[i] + arr[j] + arr[l];
                if (sum % k == 0) {
                    cout << arr[i] << " " << arr[j] << " " << arr[l] << endl;
                }
            }
        }
    }

    return 0;
}
