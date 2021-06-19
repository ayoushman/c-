#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[n];
    }
    int MIN_INDEX = -1;
    //  For brute force approach this question will take 0(n*n) time complexity

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            if (a[i] == a[j] && MIN_INDEX == -1)
            {
                MIN_INDEX = i + 1;
            }
        }
    }

    cout << MIN_INDEX << endl;

    return 0;
}