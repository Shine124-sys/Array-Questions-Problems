#include <bits/stdc++.h>
using namespace std;
int main()
{
    float list[] = {10.0, 4, 7, 84, 9};  // Given Array
    int size = sizeof(list) / sizeof(list[0]);  //Size of Array
    float small = list[0];  // Initialize first element as small
    
    float large = list[0];  //Initialize first element as large
    for (int i = 0; i < size; i++)
    {

        if (small > list[i])   //Compare Element for small element
        {
            small = list[i];
        }
        if (large < list[i])  //Compare Element for large element
        {
            large = list[i];
        }
    }
    cout << "Small Element in given Array :" << small;   //Print small element 
    cout << "Large Element in given Array :" << large;  //Print large element

    return 0;
}