#include <bits/stdc++.h>
using namespace std;

int main()
{
	cout << "Enter size: ";
	int n;
	cin >> n;

	int a[n];
	cout << "Enter array elements: ";
	for(int i = 0 ; i < n ; i++)
		cin >> a[i];

	for(int i = 0 ; i < n - 1 ; i++)
	{
		int min = a[i], minIndex = i;

		for(int j = i + 1 ; j < n ; j++)
		{
			if(a[j] < min)
			{
				min = a[j];
				minIndex = j;
			}
		}

		swap(a[i], a[minIndex]);
	}

	cout << "Sorted array: ";
	for(int i = 0 ; i < n ; i++)
		cout << a[i] << "  ";

	return 0;
}