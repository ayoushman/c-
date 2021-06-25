#include <iostream>
using namespace std;

class stack
{
public:
    int n;
    int *arr;
    int top;

    stack()
    {
        arr = new int[n];
        top = -1;
    }
    void push(int val)
    {

        if (top > n - 1)
        {
            cout << "Overflow condition" << endl;
            return;
        }

        top++;
        arr[top] = val;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "UnderfLOW CONDITION" << endl;

            return;
        }
        top--;
    }

    void peek(){
        if(top==-1){
            cout<<"No element yet"<<endl;
            return;
        }

        cout<<arr[top]<<endl;
    }
};

int main(){
    stack st ; 

    st.push(4);
    st.push(5);
    st.push(1);
    st.push(10);
    st.peek();
    st.pop();
    st.peek();
}
