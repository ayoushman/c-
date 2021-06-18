#include <iostream>
using namespace std;

int main()
{
    string s = "pippxxppiixippi";

    cout << s << endl;

    string output;

    for (int i = 0; i < s.length(); i++)
    {
        if (i + 1 < s.length() && s[i] == 'p' && s[i + 1] == 'i')
        {
            output += "3.14";
            i++;
        }

        else
        {
            output = output + s[i];
        }
    }

    cout << s.length() << endl;
    cout << output.length() << endl;

    cout << output << endl;

    return 0;
}