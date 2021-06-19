#include <iostream>
using namespace std;

class queue
{
    int n = 20;

    int *arr;
    int front;
    int back;

public:
    queue()
    {
        arr = new int[n];
        front = -1;
        back = -1;
    }

    void push(int val)
    {
        if (back == n - 1)
        {
            cout << "QUEUE OVERFLOW" << endl;
            return;
        }

        back++;
        arr[back] = val;

        if (front == -1)
        {
            front++;
        }
    }

    void pop()
    {
        if (back == -1 and front == -1 || front > back)
        {
            cout << "Queue underflow" << endl;
            return;
        }

        else
        {
            front++;
        }
    }

    void peek()
    {

        cout << arr[front] << endl;
    }
};

int main()
{

    queue q;

    q.push(3);
    q.push(8);
    q.push(5);
    q.push(2);
    q.push(1);

    q.peek();
    q.pop();
    q.peek();
    q.pop();
    q.peek();
}