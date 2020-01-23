#include <bits/stdc++.h>
using namespace std;

void bfs(int **adj, bool *visited, int n, int sv)
{
	queue<int> q;
	q.push(sv);
	//visited[sv] = true;

	while(!q.empty())
	{
		int p = q.front();
		cout << p << "\t";
		q.pop();
		for(int i = 0 ; i < n ; i++)
		{
			if(adj[p][i] == 1 && !visited[i])
			{
				visited[i] = true;
				q.push(i);
			}

		}
	}
}

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
		int l, r;
		cin >> l >> r;
		adj[l][r] = 1;
		adj[r][l] = 1;
	}

	bool *visited = new bool[v];
	for(int i = 0 ; i < v ; i++)
		visited[i] = false;

	int sv;
	cout << "Enter start vertex: ";
	cin >> sv;
	visited[sv] = true;
	bfs(adj, visited, v, sv);
	
	return 0;
}