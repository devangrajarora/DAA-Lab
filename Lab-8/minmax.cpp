#include <iostream>
using namespace std;
class mmax
{
public:
    int min;
    int max;
};

mmax obj;

mmax minmax(int a[], int low, int high)
{
    int mid;

    if (low == high)
    {
        obj.min = a[0];
        obj.max = a[0];
        return obj;
    }
    if (high == low + 1)
    {
        if (a[low] > a[high])
        {
            obj.max = a[low];
            obj.min = a[high];
        }
        else
        {
            obj.max = a[high];
            obj.min = a[low];
        }
        return obj;
    }
    else
    {
        int mid = (low + high) / 2;
        mmax p1 = minmax(a, low, mid);
        mmax p2 = minmax(a, mid + 1, high);

        if (p1.max > p2.max)
            obj.max = p1.max;
        else
            obj.max = p2.max;

        if (p1.min < p2.min)
            obj.min = p1.min;
        else

            obj.min = p2.min;
        return obj;
    }
}
int main()
{
    int n;
<<<<<<< HEAD:Lab-7/minmax.cpp
    cout << "Enter no of elements: ";
    cin >> n;
    int a[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    mmax p = minmax(a, 0, n - 1);
    cout << "The maximum element is " << p.max << "\n";
    cout << "The minimum element is " << p.min << "\n";
=======
    cout << "\nEnter the number of elements in the array: ";
    cin >> n;
    int a[n];
    cout << "Enter the elements in array: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    mmax x = minmax(a, 0, n - 1);
    cout << "The maximum element is " << x.max << "\n";
    cout << "The minimum element is " << x.min << "\n";
>>>>>>> 019bf7ea14b65150c6dcc59a09aef6cf5f3f5b1e:Lab-8/minmax.cpp
    return 0;
}