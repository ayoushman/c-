#include <iostream>
using namespace std;

string rmduplicate(string s)
{

    for (int i = 0; i < s.length(); i++)
    {
        for (int j = i + 1; j < s.length(); j++)
        {
            if (s[i] == s[j])
            {
                s.erase(j, 1);
            }
        }
    }

    return s;
}

int main()
{

    string s = "ayushman";

    cout << s << endl;
    cout << rmduplicate(s) << endl;

    // cout << s.erase(2, 1);
}