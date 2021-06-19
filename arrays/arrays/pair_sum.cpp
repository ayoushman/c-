#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// This approach work on the sorted array
bool pair_sum_optimized(int a[], int n, int sum)
{

    int low = 0;
    int high = n - 1;

    while (low < high)
    {
        if (a[low] + a[high] > sum)
        {
            high--;
        }
        else if (a[low] + a[high] < sum)
        {
            low++;
        }

        else
        {
            cout << low << " " << high << endl;
            return true;
        }
    }
    cout << "No sum found" << endl;
    return false;
}

int main()
{
    int a[] = {1, 4, 5, 2, 7, 11, 23, 55};
    int n = sizeof(a) / sizeof(a[0]);
    sort(a, a + n);
    int k = 7;
    pair_sum_optimized(a, 8, k);
}