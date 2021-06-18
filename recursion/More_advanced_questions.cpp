#include <iostream>
using namespace std;

/* Tiling Problem , the notes will be on whimsical given a "2 *n "board 

count the number of ways to the tile the given board using these tiles

*/

int tilingWays(int n)
{

    if (n == 0)
    {
        return 0;
    }

    if (n == 1)
    {
        return 1;
    }

    return tilingWays(n - 1) + tilingWays(n - 2);
}

int friendPair(int n)
{

    if (n == 0 || n == 1 || n == 2)
    {
        return n;
    }

    return friendPair(n - 1) + friendPair(n - 2) * (n - 1);
}
int main()
{

    int n = 4;
    cout << friendPair(n) << endl;
}