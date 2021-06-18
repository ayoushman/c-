#include <iostream>
using namespace std;

// To find the sum till n
int Sum(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return n + Sum(n - 1);
}

// To find the power of the a number with the given number

int power(int n, int p)
{

    if (p == 0)
    {
        return 1;
    }

    return n * power(n, p - 1);
}

// To find the factorial of the number

int Factorial(int n)
{

    if (n == 1)
    {
        return 1;
    }

    return n * Factorial(n - 1);
}

// Print nth fibnachhi number

int PrintFibNum(int n)
{
    if (n <= 2)
    {
        return 1;
    }

    return PrintFibNum(n - 1) + PrintFibNum(n - 2);
}
int main()
{
    int b = Sum(50);
    int c = power(2, 6);
    cout << b << endl;

    int d = Factorial(4);

    int e = PrintFibNum(8);

    cout << c << endl;

    cout << d << endl;
    cout << e << endl;
    return 0;
}