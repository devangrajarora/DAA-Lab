#include <iostream>
using namespace std;

class charStack
{
    char s[1000];
    int top;
    int size;
    int count;

public:

    int getCount()
    {
        return count;
    }

    charStack()
    {
        top = 0;
        size = 10;
        count = 0;
    }

    void push(char elem)
    {
        if(top == size)
        {
            //cout << "Stack overflow";
            return;
        }

        s[top++] = elem;
        count++;
    }

    char pop()
    {
        if(top == 0)
        {
            //dcout << "Stack underflow";
            return -1;
        }

        char ans = s[top - 1];
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
