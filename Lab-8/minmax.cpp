#include <iostream>
using namespace std;
class mmax
{
public:
    int min;
    int max;
};
mmax pairr;
mmax minmax(int a[], int low, int high)
{
    int mid;

    if (low == high)
    {
        pairr.min = a[0];
        pairr.max = a[0];
        return pairr;
    }
    if (high == low + 1)
    {
        if (a[low] > a[high])
        {
            pairr.max = a[low];
            pairr.min = a[high];
        }
        else
        {
            pairr.max = a[high];
            pairr.min = a[low];
        }
        return pairr;
    }
    else
    {
        int mid = (low + high) / 2;
        mmax p1 = minmax(a, low, mid);
        mmax p2 = minmax(a, mid + 1, high);

        if (p1.max > p2.max)
            pairr.max = p1.max;
        else
            pairr.max = p2.max;

        if (p1.min < p2.min)
            pairr.min = p1.min;
        else

            pairr.min = p2.min;
        return pairr;
    }
}
int main()
{
    int n;
    cout << "\nEnter the number of elements in the array: ";
    cin >> n;
    int a[n];
    cout << "Enter the elements in array: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    mmax x = minmax(a, 0, n - 1);
    cout << "The maximum element is " << x.max << "\n";
    cout << "The minimum element is " << x.min << "\n";
    return 0;
}