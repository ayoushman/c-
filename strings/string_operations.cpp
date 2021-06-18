#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

    // There is also a way with the AICTE PATTERN BY SUBTRACTING AND ADDING THE NUMBERS
    string s = "asdkndjksadsnkjs";

    // to upper case
    transform(s.begin(), s.end(), s.begin(), ::toupper);

    cout << s << endl;

    // to lower case
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << s << endl;
    return 0;
}