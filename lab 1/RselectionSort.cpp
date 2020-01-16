#include <bits/stdc++.h>
using namespace std;

void selectionSort(int *a, int n)
{
	if(n == 1)
		return;

	int min = a[0], minIndex = 0;

	for(int i = 1 ; i < n ; i++)
		if(a[i] < min)
			minIndex = i;

	swap(a[0], a[minIndex]);
	selectionSort(a + 1, n - 1);
}

int main()
{
	cout << "Enter size: ";
	int n;
	cin >> n;

	int a[n];
	cout << "Enter array elements: ";
	for(int i = 0 ; i < n ; i++)
		cin >> a[i];

	selectionSort(a, n);

	cout << "Sorted array: ";
	for(int i = 0 ; i < n ; i++)
		cout << a[i] << "  ";

	return 0;
}