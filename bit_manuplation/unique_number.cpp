/*We are given an array of every element coming twice except one we have to find that one element*/

#include <iostream>
using namespace std;

int getUniqueNumber(int a[], int n)
{
    int xorsum = 0;

    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum ^ a[i];
    }

    return xorsum;
}

int main()
{

    int array[] = {1,
                   2,
                   3,
                   4,
                   4,
                   5,
                   3,
                   2,
                   1};

    int a = getUniqueNumber(array, 9);

    cout << a << endl;
}