#include <bits/stdc++.h>
using namespace std;

int binarySearch(int *a, int n, int key)
{
	//static int count = 0;
	int si = 0, ei = n - 1;
	while(si <= ei)
	{
		int mid = (ei + si) / 2;

		if(a[mid] == key)
			return mid;
		else if(a[mid] > key)
			ei = mid -1;
		else
			si = mid + 1;
	}

	return -1;
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

	int pos = binarySearch(a, n, key);

	if(pos == -1)
		cout << "Element not found" << endl;
	else
		cout << "Found at position: " << pos + 1 << endl;

	return 0;
}

// 8
// 1 3 5 8 13 43 56 87