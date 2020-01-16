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

        void enqueue(int elem)
        {
            if(r == MAX - 1)
            {
                cout << "Queue is filled";
                return;
            }

            q[++r] = elem;
            count ++;
        }

        void dequeue()
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
