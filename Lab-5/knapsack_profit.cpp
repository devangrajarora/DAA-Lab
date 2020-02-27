#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, c;
    cout << "Enter no of items: ";
    cin >> n;
    cout << "Enter capacity of knapsack: ";
    cin >> c;

    cout << "Enter weights: ";
    double weights[n], index[n], prices[n];
    for(int i = 0 ; i < n ; i++)
    {
        index[i] = i + 1;
        cin >> weights[i];
    }

    cout << "Enter prices: ";
    for(int i = 0 ; i < n ; i++)
        cin >> prices[i];
    
    for(int i = 0 ; i < n ; i++)
        for(int j = 0; j < n - i - 1 ; j++)
            if(prices[j] <= prices[j + 1])
            {
                swap(index[j], index[j + 1]);
                swap(prices[j], prices[j + 1]);
                swap(weights[j], weights[j + 1]);
            }

    int k = 0, currCapacity = 0;
    
    while(k < n && currCapacity + weights[k] <= c)
    {
        currCapacity += weights[k];
        k++;
    }

    cout << "Selected items are: ";
    for(int i = 0 ; i < k ; i++)
        cout << index[i] << " ";

    return 0;
}

/*
5
20
5 4 10 20 3
5 10 100 200 3
*/