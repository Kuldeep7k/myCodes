#include <iostream>
#include <limits>

using namespace std;

#define V 6 // Number of vertices in the graph

int minDistance(int dist[], bool visited[]) {
    int min = numeric_limits<int>::max();
    int minIndex = -1;

    for (int v = 0; v < V; v++) {
        if (!visited[v] && dist[v] <= min) {
            min = dist[v];
            minIndex = v;
        }
    }

    return minIndex;
}

void dijkstra(int graph[V][V], int src) {
    int dist[V];
    bool visited[V];

    for (int i = 0; i < V; i++) {
        dist[i] = numeric_limits<int>::max();
        visited[i] = false;
    }

    dist[src] = 0;

    for (int count = 0; count < V - 1; count++) {
        int u = minDistance(dist, visited);

        visited[u] = true;

        for (int v = 0; v < V; v++) {
            if (!visited[v] && graph[u][v] && dist[u] != numeric_limits<int>::max() && dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    cout << "Vertex\tDistance from Source\n";
    for (int i = 0; i < V; i++) {
        cout << i << "\t" << dist[i] << endl;
    }
}

int main() {
    int graph[V][V];

    cout << "Enter the adjacency matrix for the graph (size 6x6):\n";
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            cin >> graph[i][j];
        }
    }

    int source;
    cout << "Enter the source vertex: ";
    cin >> source;

    dijkstra(graph, source);

    return 0;
}












// Enter the adjacency matrix for the graph (size 6x6):
// 0 4 0 0 0 0
// 4 0 8 0 0 0
// 0 8 0 7 0 4
// 0 0 7 0 9 14
// 0 0 0 9 0 10
// 0 0 4 14 10 0
// Enter the source vertex: 0
// Vertex  Distance from Source
// 0       0
// 1       4
// 2       12
// 3       19
// 4       26
// 5       16


