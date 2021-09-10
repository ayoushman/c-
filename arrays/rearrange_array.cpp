#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the lenght of the array " << endl;
    cin >> n;

    int arr[n];
    int pos_counter = 0;
    int neg_counter = 0;
    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
        if (arr[i] > 0)
        {
            pos_counter++;
        }

        else if (arr[i] < 0)
        {
            neg_counter++;
        }
    }

    int pos_arr[pos_counter];
    int neg_arr[neg_counter];

    int k = 0;
    int y = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            pos_arr[k] = arr[i];
            k++;
        }

        else if (arr[i] < 0)
        {
            neg_arr[y] = arr[i];
            y++;
        }
    }

    cout << "pos_array" << endl;
    for (int i = 0; i < pos_counter; i++)
    {
        cout << pos_arr[i] << endl;
    }
    cout << "neg_array" << endl;
    for (int i = 0; i < neg_counter; i++)
    {
        cout << neg_arr[i] << endl;
    }
    int z = 1;

    int pos_key = 0;
    int neg_key = 0;
    for (int i = 0; i < n; i = i + 2)
    {
        if (pos_counter >= neg_counter)
        {
            arr[i] = pos_arr[pos_key];
            pos_key++;
            if (z <= neg_counter)
            {
                arr[i + 1] = neg_arr[neg_key];
                neg_key++;
                z++;
            }

            else if (z > neg_counter)
            {
                arr[i + 1] = pos_arr[pos_key];
                pos_key++;
            }
        }

        else if (neg_counter >= pos_counter)
        {
            arr[i] = neg_arr[i];
            neg_key++;
            if (z <= pos_counter)
            {
                arr[i + 1] = pos_arr[i];
                pos_key++;
                z++;
            }

            else if (z > pos_counter)
            {
                arr[i + 1] = neg_arr[i + 1];
                neg_key++;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}