#include <bits/stdc++.h>
using namespace std;

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

	int flag = -1;
	for(int i = 0 ; i < n ; i++)
		if(a[i] == key)
		{
			flag = i;
			break;
		}

	if(flag == -1)
		cout << "Not found" << endl;
	else
		cout << "Element found at position: " << flag + 1 << endl;

	return 0;
}