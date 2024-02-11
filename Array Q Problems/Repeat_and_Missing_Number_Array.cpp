#include <bits/stdc++.h>
using namespace std;
int main()
{
   vector<int> duplicates;
   int list[] = {3, 4, 6, 7, 8, 8, 9, 12};
   int size = sizeof(list) / sizeof(list[0]); // Size of Array list
   for (int i = 0; i < size; i++)
   {
      int pos = list[i];
      for (int j = i + 1; j < size; j++)
      {
         if (pos == list[j])
         {
            duplicates.push_back(list[j]);
         }
      }
   }
   if (duplicates.size() == 0)
   {
      cout << "No duplicates value present in given list";
   }
   else
   {
      cout << "Duplicate Values are:";
      for (int i = 0; i < duplicates.size(); i++)
      {
         cout << duplicates[i] << "\t";
      }
   }

   vector<int> mises;
   int mis = list[0];
   for (int i = 0; i < size; i++)
   {
      if (mis != list[i])
      {
         while (mis < list[i])
         { // If not, add missing elements to the vector
            mises.push_back(mis++);
         }
      }

      mis++;
   }
   cout << "\nMissing Element in Array List:";
   for (int digit : mises)
   {
      cout << digit << " ";
   }
   return 0;
}