#include <bits/stdc++.h>
using namespace std;

int linearSearch(int *a, int n, int key)
{
	if(n == 0)
		return -1;

	if(a[n - 1] == key)
		return n - 1;
	else 
		return linearSearch(a, n - 1, key);
}

int main()
{
	cout << "Enter size: ";
	int n, key;
	cin >> n;

	int a[n];
	cout << "Enter array elements: ";
	for(int i = 0 ; i < n ; i++)
		cin >> a[i];

	cout << "Enter element to be found: ";
	cin >> key;

	int pos = linearSearch(a, n, key);
	if(pos == -1)
		cout << "Element not found" << endl;
	else
		cout << "Found at position: " << pos + 1 << endl;


	return 0;
}