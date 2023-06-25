#include <iostream>
using namespace std;

int n;
int graph[20][20], completed[10];

int DepthFirstSearch(int i) {
    cout << i << " ";
    completed[i] = 1;

    for (int j = 0; j < n; j++) {
        if (!completed[j] && graph[i][j] == 1) {
            DepthFirstSearch(j);
        }
    }

    return 0;
}

int main() {
    int i, j;

    cout << "Enter the number of vertices: ";
    cin >> n;

    cout << "Enter adjacency matrix:\n";
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cin >> graph[i][j];
        }
    }

    for (i = 0; i < n; i++) {
        completed[i] = 0;
    }

    cout << "Depth First Search is:\n";
    DepthFirstSearch(0);

    return 0;
}








// Enter the number of vertices: 6
// Enter adjacency matrix:
// 0 1 1 0 0 0
// 1 0 0 1 0 0
// 1 0 0 0 1 0
// 0 1 0 0 0 1
// 0 0 1 0 0 1
// 0 0 0 1 1 0
// Depth First Search is:
// 0 1 3 5 4 2
