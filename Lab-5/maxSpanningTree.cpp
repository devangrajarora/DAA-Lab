#include <bits/stdc++.h>
using namespace std;
int find(int parent[],int i)
{
    while (parent[i] != i)
    {
        i = parent[i];
    }
    return i;
}

void union1(int parent[],int i, int j)
{
    int a = find(parent,i);
    int b = find(parent,j);
    parent[a] = b;
}


int main()
{
    int V, e;
    cin >> V  >>  e;
    int cost[V][V],parent[V];

    for (int i = 0; i < V; ++i)
        for (int j = 0; j < V; ++j)
            cost[i][j] = 0;

    for (int i = 0; i < e; ++i)
    {
        int l, r, w;
        cin >> l >> r >> w;
        cost[l][r] = w;
        cost[r][l] = w;
    }

    int mincost = 0;
    for (int i = 0; i < V; i++)
    {
            parent[i] = i;
    }
    int edge_count = 0;
    while (edge_count < V - 1)
    {
        int min = 0, a = -1, b = -1;
        for (int i = 0; i < V; i++)
        {
            for (int j = 0; j < V; j++)
            {
                if (find(parent,i) != find(parent,j) && cost[i][j] > min)
                {
                    min = cost[i][j];
                    a = i;
                    b = j;
                }
            }
        }
    union1(parent,a, b);
    cout << a << " -> " << b << " : " << min << "\n";
    edge_count++;
    mincost += min;
    }


    return 0;
}
