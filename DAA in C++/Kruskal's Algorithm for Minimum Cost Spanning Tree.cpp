#include <iostream>
using namespace std;

int i, j, k, a, b, u, v, n, ne = 1;
int mincost = 0, cost[9][9], parent[9];

// Find function to find the parent of a vertex in the union-find data structure
int find(int);

// Union function to merge two sets in the union-find data structure
int uni(int, int);

int main()
{
    cout << "Enter the number of vertices: ";
    cin >> n;

    // Input the cost adjacency matrix
    cout << "Enter the cost adjacency matrix: ";
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cin >> cost[i][j];

            // Replace 0s with a large value to represent infinite weight
            if (cost[i][j] == 0)
            {
                cost[i][j] = 999;
            }
        }
    }

    // Find the edges of the minimum cost spanning tree using Kruskal's algorithm
    cout << "The edges of the minimum cost spanning tree are: ";
    while (ne < n)
    {
        int min = 999;

        // Find the minimum edge in the cost adjacency matrix
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
            {
                // Check if the vertices are not in the same set and the weight is minimum
                if (find(i) != find(j) && cost[i][j] < min)
                {
                    min = cost[i][j];
                    a = i;
                    b = j;
                }
            }
        }

        // Merge the sets containing the two vertices of the minimum edge
        u = find(a);
        v = find(b);
        if (uni(u, v))
        {
            // Print the edge and its weight
            cout << "(" << a << "," << b << ")=" << min << " ";

            // Update the minimum cost and number of edges in the MST
            mincost += min;
            ne++;
        }

        // Remove the edge from the cost adjacency matrix
        cost[a][b] = cost[b][a] = 999;
    }

    // Print the minimum cost of the MST
    cout << "\nMinimum cost = " << mincost << endl;

    return 0;
}

// Find function to find the parent of a vertex in the union-find data structure
int find(int i)
{
    while (parent[i])
    {
        i = parent[i];
    }
    return i;
}

// Union function to merge two sets in the union-find data structure
int uni(int i, int j)
{
    if (i != j)
    {
        parent[j] = i;
        return 1;
    }
    return 0;
}













// Enter the no. of vertices: 5
// Enter the cost adjacency matrix: 0 2 0 6 0
// 2 0 3 8 5
// 0 3 0 0 7
// 6 8 0 0 9
// 0 5 7 9 0
// The edges of minimum cost spanning tree are: (1,2)=2 (2,3)=3 (2,5)=5 (1,4)=6 
// Minimum cost = 16