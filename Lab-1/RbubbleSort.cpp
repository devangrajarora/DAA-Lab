#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n) 
{ 
    if (n == 1) 
        return;  
    
    for (int i=0; i<n-1; i++) 
        if (arr[i] > arr[i+1]) 
            swap(arr[i], arr[i+1]); 
  
    bubbleSort(arr, n-1); 
} 

int main()
{
	cout << "Enter size: ";
	int n;
	cin >> n;

	int arr[n];
	cout << "Enter array elements: ";
	for(int i = 0 ; i < n ; i++)
		cin >> arr[i];

	bubbleSort(arr, n);

	cout << "Sorted array: ";
	for(int i = 0 ; i < n ; i++)
		cout << arr[i] << "  ";	
	
	return 0;
}