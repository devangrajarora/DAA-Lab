#include <bits/stdc++.h>
using namespace std;

int c;

void dfs(int **adj, bool *visited, int n, int sv)
{
	c++;
	visited[sv] = true;
	cout << sv << "\t";
	c++;

	for(int i = 0 ; i < n ; i++, c++)
		if(adj[sv][i] == 1 && !visited[i])
			dfs(adj, visited, n, i);
		
}

int main()
{
	c = 0;
	int v, e;
	c++;
	cin >> v >> e;
	c++;
	cout << endl;

	int **adj = new int*[v];
	for(int i = 0 ; i < v ; i++, c++)
		adj[i] = new int[v];

	for(int i = 0 ; i < v ; i++, c++)
		for(int j = 0 ; j < v ;j++, c++)
			adj[i][j] = 0;


	for(int i = 0 ; i < e ; i++, c++)
	{
		c++;
		int l, r;
		cin >> l >> r;
		c++;
		adj[l][r] = 1;
		adj[r][l] = 1;
	}

	c++;

	bool *visited = new bool[v];
	for(int i = 0 ; i < v ; i++, c++)
		visited[i] = false;

	int sv;
	c++;
	cout << "Enter start vertex: ";
	cin >> sv;
	c++;
	dfs(adj, visited, v, sv);
	
	cout << "\nStep count: " << c;

	return 0;
}