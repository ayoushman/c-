#include <iostream>
using namespace std;

int main()
{
    // 1 . rhombus pattern
    int n;
    cout << "Enter the side of the rhombus " << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    // 2 . NUmber pattern

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}