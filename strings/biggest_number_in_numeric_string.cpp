#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    // What we need to do in this question is just take a input number in the form of string like 32877
    // and output what is the biggest number we can form from it for example 87732

    // Now lets see what i wanna do with it

    string s;

    cin >> s;
    // This will sort the string with the greatest number to lowe number
    sort(s.begin(), s.end(), greater<int>());
    cout << s << endl;
    return 0;
}