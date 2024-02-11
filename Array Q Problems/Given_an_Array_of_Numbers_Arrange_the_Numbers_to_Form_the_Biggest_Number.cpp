#include <bits/stdc++.h>

using namespace std;

int myCompare(string x, string y)
{
   // Assuming you want to concatenate b to a
   string xy = x.append(y);
   string yx = y.append(x);
   return xy.compare(yx) > 0 ? 1 : 0;
}

int main()
{
   int arr[] = {91, 94, 91, 45, 67};
   vector<string> str;
   int si = sizeof(arr) / sizeof(arr[0]);
   for (int i = 0; i < si; i++)
   {
      str.push_back(to_string(arr[i]));
   }

   sort(str.begin(), str.end(), myCompare);

   for (int i = 0; i < str.size(); i++)
   {
      cout << str[i];
   }

   return 0;
}
// #include<bits/stdc++.h>

// using namespace std;

// int merge(string x, string y) {
//     // Concatenate two strings and compare
//     string xy = x.append(y);
//     string yx = y.append(x);
//     // Compare the concatenated strings
//     return xy.compare(yx) > 0 ? 1 : 0;
// }

// int main() {
//     int arr[] = {91, 94, 91, 45, 67};
//     vector<string> str;
//     int si = sizeof(arr) / sizeof(arr[0]);
//     for (int i = 0; i < si; i++) {
//         // Convert each integer to a string and add to vector
//         str.push_back(to_string(arr[i]));
//     }
    
//     // Sort the vector using the custom comparison function
//     sort(str.begin(), str.end(), merge);
        
//     // Output the sorted array
//     for (int i = 0; i < str.size(); i++) {
//        cout << str[i] << " ";
//     }
    
//     return 0;
// }
