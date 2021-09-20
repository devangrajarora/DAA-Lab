#include <iostream> 
using namespace std; 
void insertionSortRecursive(int arr[], int n) 
{ 
	if (n <= 1) 
		return; 
	insertionSortRecursive( arr, n-1 ); 
	int last = arr[n-1]; 
	int j = n-2; 

	while (j >= 0 && arr[j] > last) 
	{ 
		arr[j+1] = arr[j]; 
		j--; 
	} 
	arr[j+1] = last; 
} 
void printArray(int arr[], int n) 
{ 
	for (int i=0; i < n; i++) 
		cout << arr[i] <<" "; 
} 
int main() 
{ 
	int arr[20];
        int n;
        cout<<"Enter the no. of element is the array";
        cin>>n;
        cout<<"Enter the elements in the array";
        for(int i=0;i<n;i++)
        {
           cin>>arr[i];
        }
	insertionSortRecursive(arr, n); 
	printArray(arr, n); 

	return 0; 
} 

