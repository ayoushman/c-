#include <iostream>
using namespace std;
// To check if the array is sorted

/*Simple method without recursion*/
bool checkSort(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            count++;
            return false;
        }
    }

    if (count == 0)
    {
        return true;
    }
}

// Recursion method of checkSort method
bool RecursionCheckSort(int a[], int n)
{
    if (n == 1)
    {
        return true;
    }

    return (a[0] < a[1] && RecursionCheckSort(a + 1, n - 1)); /*Here a+1 means that pointer  will point to the 2nd element from starting*/
}

// Print all the numbers till n in the decreasinf orders
void decreasingOrder(int n)
{
    if (n == 0)
    {
        return;
    }

    cout << n << endl;
    decreasingOrder(n - 1);
}
// Print all the numbers till n in the Increasing orders
void IncreasingOrder(int n)
{
    if (n == 0)
    {
        return;
    }

    IncreasingOrder(n - 1);
    cout << n << endl;
}

//  find the frist and the last index of the key in the index array

int firstOcc(int arr[], int i, int n, int key)
{
    if (i == n)
    {
        return -1;
    }

    if (arr[i] == key)
    {
        return true;
    }

    return firstOcc(arr, i + 1, n, key);
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int b[] = {1, 2, 3, 4, 7, 5, 6, 8, 9, 10};

    cout << RecursionCheckSort(a, 10) << endl;
    cout << RecursionCheckSort(b, 10) << endl;

    decreasingOrder(6);
    IncreasingOrder(6);
    cout << firstOcc(a, 0, 10, 11) << endl;
}