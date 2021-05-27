#include <iostream>
using namespace std;

int main()
{

    int rows;
    int cols;
    int key;
    cout << "Enter the number of rows" << endl;
    cin >> rows;
    cout << "Enter the number of cols" << endl;
    cin >> cols;

    cout << "Enter the Element you want to search" << endl;
    cin >> key;
    int a[rows][cols];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Enter element for " << i << " row"
                 << " and " << j << " columm" << endl;
            cin >> a[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    // Searching for the element

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (key == a[i][j])
            {
                cout << a[i][j] << " " << i << j << endl;
                break;
            }
        }
        cout << endl;
    }
}