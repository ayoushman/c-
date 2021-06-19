#include <iostream>
using namespace std;

int main()
{
    int k;
    cout << "Enter the no " << endl;
    cin >> k;

    int a[k];

    for (int i = 0; i < k; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < k; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}