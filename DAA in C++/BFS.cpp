#include <iostream>

using namespace std;

const int MAX_VERTICES = 4; // maximum number of vertices in the graph

void BFS(int adj[MAX_VERTICES][MAX_VERTICES], int start, bool visited[MAX_VERTICES]) {
    int queue[MAX_VERTICES]; // using an array as a queue to store vertices
    int front = -1, rear = -1; // front and rear pointers for the queue
    visited[start] = true; // mark the start vertex as visited
    queue[++rear] = start; // insert the start vertex into the queue

    while (front != rear) { // repeat until the queue is empty
        int currVertex = queue[++front]; // get the next vertex from the front of the queue
        cout << currVertex << " "; // display the current vertex

        for (int adjVertex = 0; adjVertex < MAX_VERTICES; adjVertex++) { // check all adjacent vertices
            if (adj[currVertex][adjVertex] == 1 && !visited[adjVertex]) { // if an adjacent vertex is found and not visited
                visited[adjVertex] = true; // mark it as visited
                queue[++rear] = adjVertex; // insert it into the queue
            }
        }
    }
}

int main() {
    int adj[MAX_VERTICES][MAX_VERTICES] = {
        {0, 1, 1, 0},
        {1, 0, 0, 1},
        {1, 0, 0, 1},
        {0, 1, 1, 0}
    }; // adjacency matrix representing the graph
    bool visited[MAX_VERTICES] = {false}; // array to keep track of visited vertices

    // Print the adjacency matrix
    cout << "Adjacency Matrix:" << endl;
    for (int i = 0; i < MAX_VERTICES; i++) {
        for (int j = 0; j < MAX_VERTICES; j++) {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "BFS Traversal: ";
    BFS(adj, 0, visited); // start BFS traversal from vertex 0

    return 0;
}
