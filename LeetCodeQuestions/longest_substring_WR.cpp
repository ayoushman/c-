#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s)
{

    vector<int> vect(256, -1);

    int max_len = 0;
    int start = -1;

    for (int i = 0; i < s.size(); i++)
    {
        if (vect[s[i]] > start)
        {

            cout<<vect[s[i]]<<endl;
            start = vect[s[i]];
        }
    vect[s[i]] = i;
        max_len = max(max_len, i - start);
    }

    return max_len;
}

int main()
{

    string s = "abcabcabb";
    int number = lengthOfLongestSubstring(s);

    cout << number << endl;
}