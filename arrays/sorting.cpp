#include <iostream>
using namespace std;

void SelectionSort(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
            {
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
}

int main()
{
    int n;

    cout << "Enter the lenght of the array";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Ennter the elemment at index" << i;
        cin >> a[i];
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (a[j] < a[i])
    //         {
    //             int temp = a[j];
    //             a[j] = a[i];
    //             a[i] = temp;
    //         }
    //     }
    // }

    // 2. INsertion sort

    for (int i = 1; i < n; i++)
    {
        int current = a[i];
        int j = i - 1;
        while (a[j] > current && j >= 0)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = current;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
}