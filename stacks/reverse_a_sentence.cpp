#include <iostream>
#include <stack>
using namespace std;

// reverse a sentence using stack in linked list
int main()
{

    string a = "Hello Dear , My Name is Ayoushman";
    stack<string> st;

    string str = "";
    for (int i = 0; i < a.length(); i++)
    {
        str = str + a[i];

        if (a[i] == ' ')
        {

            st.push(str);

            str = "";
        }

        else if (i == a.size() - 1)
        {
            st.push(str);
            str = "";
        }
    }

    while (st.size())
    {
        cout << st.top() << " " << endl;
        st.pop();
    }
}