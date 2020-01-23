#include<iostream>
using namespace std;
#define MAX 100
class Queue
{
    int f, r, count;
    int q[MAX];

public:

        Queue()
        {
            f = 0;
            r = -1;
            count = 0;
        }

        void push(int elem)
        {
            if(r == MAX - 1)
            {
                cout << "Queue is filled";
                return;
            }

            q[++r] = elem;
            count ++;
        }

        void pop()
        {
            if(f > r)
            {
                cout << "Empty stack";
                return;
            }

            f++;
            count --;
        }

        void display()
        {
            if(f <= r)
                for(int i = f ; i <= r ; i++)
                    cout << q[i] << "  ";
            cout << endl;
        }

};


int main()
{
    cout << "1. Push\n2. Pop\n3. Display\n4.Exit\n";
    int ch;
    cout << "Enter choice: ";
    cin >> ch;
    Queue s;

    while(ch < 4)
    {
        switch(ch)
        {
            case 1:
            {
                cout << "Enter element to be inserted: ";
                int elem;
                cin >> elem;
                s.push(elem);
                break;
            }

            case 2:
            {
                s.pop();
                break;
            }

            case 3: 
            {
                s.display();
                break;
            }

            default:
            {
                return 0;
            }
        }

        cout << "\nEnter choice: ";
        cin >> ch;
    }

    return 0;
}