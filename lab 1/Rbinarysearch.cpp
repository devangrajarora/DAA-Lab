#include <bits/stdc++.h>
using namespace std;

int binarySearch(int a[], int si, int ei, int key)
{
	if(si > ei)
		return -1;

	int mid = (ei + si) / 2;

	if(a[mid] == key)
		return mid;
	else if(a[mid] > key)
		return binarySearch(a, si, mid - 1, key);
	else
		return binarySearch(a, mid + 1, ei, key);

}

int main()
{
	cout << "Enter size: ";
	int n, key;
	cin >> n;

	int a[n];
	cout << "Enter sorted array elements: ";
	for(int i = 0 ; i < n ; i++)
		cin >> a[i];

	cout << "Enter element to be found: ";
	cin >> key;

	int pos = binarySearch(a, 0, n - 1, key);

	if(pos == -1)
		cout << "Element not found" << endl;
	else
		cout << "Found at position: " << pos + 1 << endl;

	return 0;
}