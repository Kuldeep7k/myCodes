#include <iostream>
using namespace std;

const int MAXN = 100; // maximum number of vertices in the graph

int graph[MAXN][MAXN]; // adjacency matrix
int transitiveClosure[MAXN][MAXN]; // transitive closure matrix

int main()
{
    int n; // number of vertices in the graph
    cout << "Enter the number of vertices in the graph: ";
    cin >> n;

    if (n <= 0 || n > MAXN) {
        cout << "Error: Invalid number of vertices." << endl;
        return 1;
    }

    // read the adjacency matrix
    cout << "Enter the adjacency matrix:" << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> graph[i][j];
            transitiveClosure[i][j] = graph[i][j];
        }
    }

    // apply Warshall's Algorithm
    for(int k = 0; k < n; k++) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                transitiveClosure[i][j] = transitiveClosure[i][j] || (transitiveClosure[i][k] && transitiveClosure[k][j]);
            }
        }
    }

    // print the transitive closure matrix
    cout << "The transitive closure matrix is:" << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << transitiveClosure[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


// Enter the number of vertices in the graph: 6
// Enter the adjacency matrix:
// 0 1 1 0 0 0
// 0 0 0 1 1 0
// 0 0 0 0 1 1
// 0 0 0 0 0 1
// 0 0 0 0 0 1
// 0 0 0 0 0 0
// The transitive closure matrix is:
// 0 1 1 1 1 1
// 0 0 0 1 1 1
// 0 0 0 0 1 1
// 0 0 0 0 0 1
// 0 0 0 0 0 1
// 0 0 0 0 0 0