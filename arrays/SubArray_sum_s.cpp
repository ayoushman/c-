#include <iostream>
using namespace std;

int main()
{

    // Bruteforce approch

    // Lets find the all the array sum and then give the index

    int n;
    cout << "Enter the length of the array";

    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element at the index" << i << endl;
        cin >> a[i];
    }
    int sum;

    int Key = 5;
    for (int i = 0; i < n; i++)
    {

        sum = 0;
        for (int j = i; j < n; j++)
        {
            sum = sum + a[j];
            if (sum == Key)
            {
                cout << i << " " << j << endl;
                break;
            }
        }
    }

    // Now lets see the optimized approach

    // Keep 2 pointers start and end , and a variable currSum
    /*CURR_SUM = SUM FROM START TO END  */

    // int curr_sum = 1;
    // int start = 0;
    // int end = 0;
    // int  j = 0;
    // while (j< n &&curr_sum + a[end]>Key)
    // {
    //  curr_sum = curr_sum+a[j];
    //     end++;
    // }

    // while (curr_sum + a[end]<=Key)
    // {
    //    start++;
    // }
    /*I WILL START DOING IT GOTTA WATCH THE VIDEO ONE MORE TYM */
    return 0;
}