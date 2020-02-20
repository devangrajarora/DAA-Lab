#include <bits/stdc++.h>
using namespace std;

int main()
{
	
	int v, e;
	cin >> v >> e;
	cout << endl;

	int **adj = new int*[v];

	for(int i = 0 ; i < v ; i++)
		adj[i] = new int[v];

	for(int i = 0 ; i < v ; i++)
		for(int j = 0 ; j < v ;j++)
			adj[i][j] = 0;


	for(int i = 0 ; i < e ; i++)
	{
		int l, r, w;
		cin >> l >> r >> w;
		adj[l][r] = w;
	}

	bool *visited = new bool[v];
	for(int i = 0 ; i < v ; i++, c++)
		visited[i] = false;

	int sv, *parent = new int[v];
	cout << "Enter start vertex: "; 
	cin >> sv;
	parent[sv] = 0;
	for(int i = 0 ; i < v ; i++)
		if(i != sv)
			parent[i] = -1;

	int *distance = new int[v];
	distance[0] = 0;
	for(int i = 1 ; i < v ; i++, c++)
		distance[i] = INT_MAX;

	for(int i = 0 ; i < v ; i++)
	{
		int curr = findMinVertex(visited, distance, v);
	}

	return 0;
}