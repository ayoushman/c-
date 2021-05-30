#include <iostream>
using namespace std;

// Print prime numbers using seive of  erastosthenes
void PrintSeive(int n)
{
    int array[100] = {0};
    for (int i = 2; i <= n; i++)
    {
        if (array[i] == 0)
        {
            for (int j = i * i; j <= n; j = j + i)
            {
                array[j] = 1;
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (array[i] == 0)
        {
            cout << i << endl;
        }
    }
}
// Prime factorization using seive of erastosthenes
int main()
{
    int n;
    cin >> n;
    PrintSeive(n);
    return 0;
}