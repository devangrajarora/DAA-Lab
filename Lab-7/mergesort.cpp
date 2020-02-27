#include<iostream>
using namespace std;
int c=0;

void display(int *array, int size) {
   for(int i = 0; i<size; i++)
   {c++;
      cout << array[i] << " ";c++;
   }c++;
   cout << endl;c++;
}
void merge(int *array, int l, int m, int r) 
{
   int i, j, k, nl, nr;
   c++;
   nl = m-l+1; c++;
   nr = r-m;c++;
   int larr[nl], rarr[nr];
   c++;

   for(i = 0; i<nl; i++)
   {
      c++;
      larr[i] = array[l+i];c++;
   }

   c++;
   
   for(j = 0; j<nr; j++)
   {
      c++;
      rarr[j] = array[m+1+j];c++;
   }
   
   c++;
   
   i = 0; c++;j = 0;c++; k = l;c++;
   while(i < nl && j<nr) {c++;
      if(larr[i] <= rarr[j]) {c++;
         array[k] = larr[i];c++;
         i++;c++;
      }else{c++;
         array[k] = rarr[j];c++;
         j++;c++;
      }
      k++;c++;
   }c++;
   while(i<nl) {  c++;
      array[k] = larr[i];c++;
      i++; k++;c++;c++;
   }c++;
   while(j<nr) {c++;  
      array[k] = rarr[j];c++;
      j++; k++;c++;c++;
   }c++;
}

void mergeSort(int *array, int l, int r) 
{
   int m;c++;
   if(l < r) {c++;
      int m = l+(r-l)/2;c++;
      mergeSort(array, l, m);c++;
      mergeSort(array, m+1, r);c++;
      merge(array, l, m, r);c++;
   }
}
int main() {
   int n;c++;
   cout<<"Enter the number of elements: ";c++;
   cin>>n;c++;
   int arr[n];c++;
   cout<<"Enter elements:";
   c++;
   for(int i=0;i<n;i++){c++;
      cin>>arr[i];c++;
   }c++;
   mergeSort(arr, 0, n-1);c++;
   cout<<"Sorted Array: ";c++;
   display(arr, n);c++;

   cout<<"\n\nNo of steps : "<<c<<endl;
   return 0;
}	