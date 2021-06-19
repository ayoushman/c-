#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter the lenght of the array" << endl;
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {

        cout << "Enter the element at the" << i << endl;

        cin >> a[i];
    }
    int b[n];

    for (int i = 0; i < n; i++)
    {
        a[i] = -1;
    }
    int minidx = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (!b[a[i]] == -1)
        {
            minidx = min(minidx, b[a[i]]);
        }

        else
        {
            b[a[i]] = i;
        }
    }

    if (minidx == INT_MAX)
    {
        cout << -1 << endl;
    }

    else
    {
        cout << minidx + 1 << endl;
    }
}