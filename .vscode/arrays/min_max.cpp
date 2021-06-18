#include <iostream>
using namespace std;

int man()
{
    int n;
    cout << "Enter  the length of the array ";
    cout << endl;
    cin >> n;

    int a[n];

    cout << "Enter the digits in the array ";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element at index " << i << endl;
        cin >> a[i];
    }

    int mx = -199999;
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, a[i]);
        cout << mx << endl;
    }

    return 0;
}