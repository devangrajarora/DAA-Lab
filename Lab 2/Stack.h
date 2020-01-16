#include <iostream>
using namespace std;

class Stack
{
    int s[1000];
    int top;
    int size;
    int count;

public:


    int getCount()
    {
        return count;
    }

    Stack()
    {
        top = 0;
        size = 10;
        count = 0;
    }

    void push(int elem)
    {
        if(top == size)
        {
            cout << "Stack overflow";
            return;
        }

        s[top++] = elem;
        count++;
    }

    int pop()
    {
        if(top == 0)
        {
            cout << "Stack underflow";
            return -1;
        }

        int ans = s[top - 1];
        top--;
        count--;
        return ans;
    }

    void display()
    {
        cout << "Stack: ";
        for(int i = 0 ; i < top ; i++)
            cout << s[i] << "  ";
    }

    int topElem()
    {
        return s[top - 1];
    }
};