#include <bits/stdc++.h>
using namespace std;
int main()
{
  int list[] = {2, 3, 4, 5, 6, 7, 8, 9};
  int size = sizeof(list) / sizeof(list[0]); // Size of Array list
  cout<<"Print Given Array :";
  for (int i = 0; i < size; i++)
  {
    cout << list[i] << "\t"; // Print Given  Array List
  }
  for (int i = 0, j = size - 1; i <= j; i++, j--) // Give Condition
  {
    int temp = list[i];
    list[i] = list[j]; // Swap Element
    list[j] = temp;
  }
  cout<<"\nPrint Reverse Array :";
  for (int i = 0; i < size; i++)
  {
    cout << list[i] << "\t"; // Print Reverse Array List
  }

  return 0;
}