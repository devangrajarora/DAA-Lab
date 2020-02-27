#include <iostream> 
#include <queue> 

using namespace std; 

bool isBipartite(int **adj, int src, int v) 
{ 
 
    int colorArr[v]; 
    for (int i = 0; i < v; ++i) 
        colorArr[i] = -1; 
 
    colorArr[src] = 1; 
    queue <int> q; 
    q.push(src); 

    while (!q.empty()) 
    { 
        int u = q.front(); 
        q.pop(); 

        if (adj[u][u] == 1) 
        return false; 
        for (int i = 0; i < v; ++i) 
        { 
            if (adj[u][i] && colorArr[i] == -1) 
            { 
                colorArr[i] = 1 - colorArr[u]; 
                q.push(i); 
            } 

            else if (adj[u][i] && colorArr[i] == colorArr[u]) 
                return false; 
        } 
    } 

    return true; 
} 

int main() 
{ 
    int v, e;
    cin >> v >> e;

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

    isBipartite(adj, 0, v) ? cout << "Bipartite\n" : cout << "Not Bipartite\n"; 
    return 0; 
} 
