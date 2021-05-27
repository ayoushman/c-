// Sum of each subarray in the give array ;
#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int n;

    cout << "Enter the lenght of the array brother " << endl;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element at index "
             << " " << i << endl;
        cin >> a[i];
    }
    int max_sum = INT_MIN;
    // For finding the sum of the subarrays
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;

        for (int j = i; j < n; j++)
        {
            sum = sum + a[j];
        }
        max_sum = max(max_sum, sum);
    }

    cout << max_sum << endl;
}