#include <iostream>
using namespace std;

// Reverse a string  using recursion

void reReverse(string s)
{
    if (s.length() == 0)
    {
        return;
    }

    reReverse(s.substr(1));

    cout << s[0] << endl;
}

// Replace pi with the string

void replacePiWithRecursion(string s)
{

    if (s.length() == 0)
    {
        return;
    }

    if (s[0] == 'p' && s[1] == 'i')
    {
        cout << "3.14";
        replacePiWithRecursion(s.substr(2));
    }

    else
    {
        cout << s[0];
        replacePiWithRecursion(s.substr(1));
    }
}

// Remove duplicates using recursion in a string

string removeDuplicate(string s)
{
    if (s.length() == 0)
    {
        return "";
    }

    char ch = s[0];

    string ans = removeDuplicate(s.substr(1));

    if (ch == ans[0])
    {
        return ans;
    }

    return (ch + ans);
}

// recursion move  all the x in the string to the backward position for example  axxbdxcefxhix =>> abdcefhixxxxx

string moveallx(string s)
{

    if (s.length() == 0)
    {
        return "";
    }

    char ch = s[0];
    string ans = moveallx(s.substr(1));

    if (ch == 'x')
    {
        return ans + ch;
    }

    return ch + ans;
}

// To print all the substrings of an strings with recursion depth

void printsubstr(string s, string ans)
{

    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }

    char ch = s[0];

    string ros = s.substr(1);
    printsubstr(ros, ans);
    printsubstr(ros, ans + ch);
}

int main()
{

    string s = "binod";

    string a = "pippxxppiixippi";
    replacePiWithRecursion(a);
    reReverse(s);

    string d = "aaabbbcccddeee";

    cout << removeDuplicate(d);
    cout << endl;
    string g = "axxbdxcefxhix";
    cout << moveallx(g);

    string k = "ABC";
    printsubstr(k, "");

    cout << k.substr(0) << endl;
}