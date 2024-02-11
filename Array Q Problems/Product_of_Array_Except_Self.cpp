#include <bits/stdc++.h>
using namespace std;
int main()
{
    int except, product;

    int list[] = {2, 4, 6, 3, 8};
    int size = sizeof(list) / sizeof(list[0]); // Size of Array list
    for (int i = 0; i < size; i++)
    {
        product = 1;
        except = list[i];
        for (int i = 0; i < size; i++)
        {
            if (except == list[i])
            {
                cout << "Except :" << list[i] << endl;
                continue;
            }
            else
            {
                product *= list[i];
            }
        }
        cout << " Product:" << product << endl;
    }

    return 0;
}