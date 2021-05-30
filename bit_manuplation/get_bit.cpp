#include <iostream>
using namespace std;

/**What happens in this type of problem we will be given a number like 5  bit- 0101 and a positon 
 we gotta tell what will the bit at that position so here like bit on pos 2 is 1 coz bit positioning start from right with index-
  zero 
  
  so the basic concept it make a bit of 1 number and left shift the 1 with the position given and then do the and operation with
  one and the given  number the diagram i have made will explain you tht it will be downloaded dw  */

int getBit(int number, int position)
{
    return (number & (1 << position)) != 0;
}
int main()
{
    int s = getBit(5, 3);

    cout << s << endl;

    return 0;
}