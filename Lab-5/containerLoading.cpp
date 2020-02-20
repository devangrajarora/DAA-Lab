#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, c;
	cout << "Enter no of containers: ";
	cin >> n;
	cout << "Enter capacity: ";
	cin >> c;

	cout << "Enter weights: ";
	int weights[n], index[n], ans[n];
	for(int i = 0 ; i < n ; i++)
	{
		index[i] = i + 1;
		cin >> weights[i];
	}

	for(int i = 0 ; i < n ; i++)
		for(int j = 0; j < n - i - 1 ; j++)
			if(weights[j] > weights[j + 1])
			{
				swap(index[j], index[j + 1]);
				swap(weights[j], weights[j + 1]);
			}

	int k = 0, currCapacity = 0;
	
	while(currCapacity + weights[k] <= c)
	{
		currCapacity += weights[k];
		k++;
	}

	cout << "Selected containers are: ";
	for(int i = 0 ; i < k ; i++)
		cout << index[i] + 1 << " ";

	return 0;
}