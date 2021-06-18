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

// ================================ i have not done this program this yet======================//

// GCD OF TWO NUMBERS AND

int GCD(int a, int b)
{

    while (b != 0)
    {
        int remainder = a % b;
        a = b;
        b = remainder;
    }

    return a;
}
int main()
{
    int n;
    cin >> n;
    PrintSeive(n);
    int b = GCD(56, 88);

    cout << b << endl;
    return 0;
}