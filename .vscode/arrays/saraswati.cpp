#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans = 2;          /*Initializing ans with 2 coz arthimatic subarray are minimum of 2 */
    int pd = a[1] - a[0]; /*Initializing the first differnce in the array , previous common dffernce  */
    int j = 2;            /*Since we have aldready taken care of first 2 index therefore initializing it with 2 */
    int current = 2;      /*Current lenght of the arthmatic subarray */

    while (j < n)
    {
        if (pd == a[j] - a[j - 1]) /*Checking for condition to increase the current length of the subarray */
        {
            current++;
        }
        else
        {
            pd = a[j] - a[j - 1];
            current = 2; /*reinitializing the current lenth as streak has been broken */
        }

        ans = max(ans, current); /*Checking for max between ans and current */
        j++;
    }

    cout << ans << endl;
    return 0;
}