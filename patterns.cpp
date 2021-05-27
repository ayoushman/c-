#include <iostream>
using namespace std;

int main()
{

    // int rows;
    // int colums;

    // cout << "Enter the number of rows" << endl;
    // cin >> rows;
    // cout << "Enter the number of columms" << endl;
    // cin >> colums;

    // 1 . simple rectangle pattern
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < colums; j++)
    //     {
    //         cout << "* ";
    //     }

    //     cout << "\n";
    // }

    // 2. Hollow rectangle

    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < colums; j++)
    //     {
    //         if (i == 0 || i == rows - 1 || j == 0 || j == colums - 1)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    int row_number;

    // Inverse half pyramid;

    // cout << "Enter the height of pyramid " << endl;

    // cin >> row_number;

    // for (int i = 0; i < row_number; i++)
    // {
    //     for (int j = row_number - i; j > 0; j--)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // 4. Half pyramid

    // cout << "Enter the height of pyramid " << endl;

    // cin >> row_number;

    // for (int i = 0; i < row_number; i++)
    // {
    //     for (int j = 0; j < row_number; j++)
    //     {
    //         if (j < row_number - i)
    //         {
    //             cout << " ";
    //         }
    //         else
    //         {
    //             cout << "*";
    //         }
    //     }

    //     cout << endl;
    // }

    // 5. Half pyramd using numbers

    // cout << "Enter the height of pyramid " << endl;

    // cin >> row_number;

    // for (int i = 1; i <= row_number; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << i;
    //     }
    //     cout << endl;
    // }

    // 6. floyds triangle

    // cout << "Enter the height of pyramid " << endl;

    // cin >> row_number;
    // int temp = 1;
    // for (int i = 1; i <= row_number; i++)
    // {

    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << temp << " ";
    //         temp++;
    //     }
    //     cout << endl;
    // }

    // 7. Inverted pattern

    // for (int i = 0; i < row_number; i++)
    // {

    //     for (int j = 1; j <= row_number - i; j++)
    //     {
    //         cout << j;
    //     }
    //     cout << endl;
    // }

    cout << "Enter the height of pyramid " << endl;

    cin >> row_number;
    // 8. 0-1 pattern

    for (int i = 1; i <= row_number; i++)
    {
        for (int j = 1; j <= i; j++)
        {

            if ((i + j) % 2 == 0)
            {
                cout << " 1";
                continue;
            }

            cout << " 0";
        }

        cout << endl;
    }
}