/*To set a bit means we gota put 1 at the given position*/

/*To clear a bit we gotta clear the bit at the given position means we gotta make tht bit zero */

/*NOW THE IS "POWER OF 2" I HAVE EXPLAINED IN THE REGISTER SO SEE FROM THERE*/

#include <iostream>
using namespace std;

int setBit(int number, int position)
{

    return (number | (1 << position));
}

int clearBit(int number, int position)
{
    int mask = ~(1 << position);
    return number & mask;
}

bool isPowof2(int n)
{

    return (n && !(n & (n - 1)));
}
int main()
{

    cout << setBit(5, 1) << endl;
    cout << isPowof2(8) << endl;
    cout << isPowof2(10) << endl;
}