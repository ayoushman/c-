#include <iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r)
{
    cout << "Merge function " << endl;
    cout << l << " ";
    cout << mid << " ";
    cout << r << " ";
    cout << endl;
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int a[n1];
    int b[n2];

    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l + i];
    }

    for (int j = 0; j < n2; j++)
    {
        b[j] = arr[mid + 1 + j];
    }
    int i = 0;
    int j = 0;
    int k = l;

    while (i < n1 && j < n2)
    {
        /* code */
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = b[j];
            k++;
            j++;
        }
    }

    while (i < n1)
    {
        arr[k] = a[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        arr[k] = b[j];
        k++;
        j++;
    }
}

// I put the counter to just check in my example so peace its nothing important
void mergesort(int arr[], int l, int r, int counter)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        cout << "MergeSort function " << endl;
        cout << l << " ";
        cout << mid << " ";
        cout << r << " ";
        cout << counter << " ";
        cout << endl;

        mergesort(arr, l, mid, 0);
        mergesort(arr, mid + 1, r, 1);
        merge(arr, l, mid, r);
    }
}

int main()
{

    int arr[] = {8, 4, 7, 6, 9, 11, 1, 3};
    mergesort(arr, 0, 7, 0);

    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }
}