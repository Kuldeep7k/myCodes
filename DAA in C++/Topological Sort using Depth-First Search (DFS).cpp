#include <iostream>
using namespace std;

int main() {
    int n, i, j, k, count = 0, indeg[10], visited[10];
    cout << "Enter the number of vertices: ";
    cin >> n;

    int AM[n][n];

    cout << "Enter the adjacency matrix:" << endl;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cin >> AM[i][j];
        }
    }

    // calculate in-degree of each vertex
    for (i = 0; i < n; i++) {
        indeg[i] = 0;
        visited[i] = 0;
        for (j = 0; j < n; j++) {
            indeg[i] += AM[j][i];
        }
    }

    cout << "\nThe Topological order is: ";

    while (count < n) {
        for (k = 0; k < n; k++) {
            if (indeg[k] == 0 && visited[k] == 0) {
                cout << k+1 << " ";
                visited[k] = 1;
                for (i = 0; i < n; i++) {
                    if (AM[k][i] == 1) {
                        indeg[i]--;
                    }
                }
            }
        }
        count++;
    }

    return 0;
}






// Enter the number of vertices: 6
// Enter the adjacency matrix:
// 0 1 1 0 0 0
// 0 0 0 1 1 0
// 0 0 0 0 0 1
// 0 0 0 0 0 0
// 0 0 0 0 0 0
// 0 0 0 0 0 0

// The Topological order is: 1 2 3 4 5 6