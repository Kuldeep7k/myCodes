#include <iostream>

// Define the maximum number of vertices in the graph
#define MAX_VERTICES 4

// Define the adjacency matrix to represent the graph
int graph[MAX_VERTICES][MAX_VERTICES] = {
    {0, 1, 1, 0},
    {1, 0, 0, 1},
    {1, 0, 0, 1},
    {0, 1, 1, 0}
};

// Define an array to keep track of visited vertices
bool visited[MAX_VERTICES];

// Define the DFS function
void dfs(int start) {
    // Print the current vertex and mark it as visited
    std::cout << start << " ";
    visited[start] = true;

    // Traverse all the adjacent vertices of the current vertex recursively
    for (int i = 0; i < MAX_VERTICES; i++) {
        // Check if the vertex is adjacent and not visited
        if (graph[start][i] == 1 && !visited[i]) {
            // Call DFS function on the adjacent vertex
            dfs(i);
        }
    }
}

// The main function
int main() {
    // Print the adjacency matrix
    std::cout << "Adjacency Matrix:" << std::endl;
    for (int i = 0; i < MAX_VERTICES; i++) {
        for (int j = 0; j < MAX_VERTICES; j++) {
            std::cout << graph[i][j] << " ";
        }
        std::cout << std::endl;
    }
    
    // Print a message for the DFS traversal
    std::cout << "Depth First Search (DFS) Traversal: ";
    
    // Call the DFS function on the starting vertex (0)
    dfs(0);

    // Print a new line and return 0 to indicate successful execution
    std::cout << std::endl;
    return 0;
}
