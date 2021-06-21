#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    /*My brute force approach 
    
    */

    cout << "Enter the number of elements in the array" << endl;
    int n;

    cin >> n;

    int a[n];

    int b[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the number at index" << i << endl;
        cin >> a[i];
    }

    cout << "Enter the length of the window" << endl;
    int k;

    cin >> k;

    int max_num = INT_MIN;
    int f = 0;
    for (int i = 0; i <= n - k; i = i + 1)
    {

        for (int j = i; j < i + k; j++)
        {

            max_num = max(max_num, a[j]);
        }
        b[f] = max_num;
        f++;
    }

    for (int i = 0; i < f; i++)
    {

        cout << b[i] << endl;
    }
}