#include <bits/stdc++.h>
using namespace std;

int c;

// void printCycle(int **adj, bool *visited, int n, int sv)
// {
// 	visited[sv] =  true;
// 	cout << sv << " ";
// 	for(int i = 0 ; i < n ; i++, c++)
// 		if(adj[sv][i] == 1)
// 			printCycle(adj, visited, n, i);
// }

bool hasCycle(int **adj, bool *visited, int n, int sv)
{
	visited[sv] =  true;
	c++;
	// cout << sv << " ";

	for(int i = 0 ; i < n ; i++, c++)
		if(adj[sv][i] == 1)
		{
			//parent[i] = sv;
			c++;
			if(visited[i])
				return true;
			else
				return hasCycle(adj, visited, n, i);
			c++;
		}
		c++;
		return false;
		
		
}

int main()
{
	int v, e;
	cin >> v >> e;
	cout << endl;

	c = 0;
	c++;

	int **adj = new int*[v];

	for(int i = 0 ; i < v ; i++)
		adj[i] = new int[v];

		for(int i = 0 ; i < v ; i++, c++)
			for(int j = 0 ; j < v ;j++, c++)
				adj[i][j] = 0;


			for(int i = 0 ; i < e ; i++, c++)
			{
				c++;
				int l, r;
				cin >> l >> r;
				adj[l][r] = 1;
			}

			bool *visited = new bool[v];
			for(int i = 0 ; i < v ; i++, c++)
				visited[i] = false;

			c++;
			int sv;
			c++;
			// cout << "Enter start vertex: ";
			// cin >> sv;
			c++;

			// int parent[n];
			// for(int i = 0 ; i < v ; i++)
			// 	parent[i] = i;

			for(int i = 0 ; i < v ; i++)
			{
				bool ans = hasCycle(adj, visited, v, i);
				if(ans)
				{
					// printCycle(adj, visited, v, i);
					cout << "Cycle exists";
					cout << "\nStep count: " << c;
					return 0;
				}

				for(int j = 0 ; j < v ; j++)
					visited[j] = false;


			}
			// (hasCycle(adj, visited, v, 0))
			// 	cout << "Cycle exists";
			// else
			cout << "No cycle";
			c++;
			cout << "\nStep count: " << c;

			return 0;
}
