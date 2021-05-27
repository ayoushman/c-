#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *pointer;
    pointer = &a;

    cout << pointer << endl;
    cout << *pointer << endl;

    // pointer and array
    int arr[] = {10, 20, 30};

    cout << *arr;

    // this arr is storing the address of the zeroth element

    int *ptr = arr;
    for (int i = 0; i < 3; i++)
    {
        cout << *ptr << endl;
        ptr++; /*This will increment poinnter with 4 and point to next address location */
    }
    return 0;
}