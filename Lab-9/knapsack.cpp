#include <bits/stdc++.h>
using namespace std;

int **a;
int *prices, *weights;

int dp(int i, int capacity, int n)
{
	int currWeight = weights[i], currPrice = prices[i];
	if(a[i][capacity] > 0)
		return a[i][capacity];

	if(i == n - 1) {
		if(currWeight < capacity)
			a[i][capacity] = currPrice;
		else
			a[i][capacity] = 0;

		return a[i][capacity];
	}

	if(currWeight < capacity) {
		int included = dp(i + 1, capacity - currWeight, n) + currPrice;
		int notIncluded = dp(i + 1, capacity, n);
		a[i][capacity] = max(included, notIncluded);
	} else { // can't include
		a[i][capacity] = dp(i + 1, capacity, n);
	}

	return a[i][capacity];
}

int main()
{
	int n;
	cout << "Enter number of items: ";
	cin >> n;
	
	prices = new int[n];
	weights = new int[n];
	int capacity;

	cout << "Enter prices: ";
	for(int i = 0 ; i < n ; i++)
		cin >> prices[i];

	cout << "Enter weights: ";
	for(int i = 0 ; i < n ; i++)
		cin >> weights[i];

	cout << "Enter capacity: ";
	cin >> capacity;

	a = new int*[n];
	for(int i = 0 ; i < n ; i++)
	{
		a[i] = new int[capacity];
		for(int j = 0 ; j < capacity ; j++)
			a[i][j] = -1;
	}

	int maxProfit = dp(0, capacity, n);
	cout << "Max profit: " << maxProfit << "\n";
	
	return 0;
}

/*
Enter number of items: 3
Enter prices: 20 18 15
Enter weights: 100 20 20 
Enter capacity: 116
Max profit: 33
*/