#include <iostream>
using namespace std;

const int MAX = 10; // Define a constant variable for maximum number of villages

int ary[MAX][MAX], completed[MAX], n, cost = 0; // Define variables to store the cost matrix, visited array, number of villages, and total cost

void takeInput() {
    cout << "Enter the number of villages: ";
    cin >> n;

    cout << "\nEnter the Cost Matrix:\n";
    for (int i = 0; i < n; i++) {
        cout << "Enter the elements of Row " << i + 1 << ":\n";
        for (int j = 0; j < n; j++) {
            cin >> ary[i][j]; // Take input for the cost matrix
        }
        completed[i] = 0; // Initialize the visited array to 0
    }

    cout << "\n\nThe cost list is:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << ary[i][j] << "\t"; // Print the cost matrix
        }
        cout << endl;
    }
}

int least(int c) {
    int min = 999, kmin = 0; // Initialize the minimum and index of the minimum cost
    for (int i = 0; i < n; i++) {
        if ((ary[c][i] != 0) && (completed[i] == 0)) { // If the cost is not 0 and the city is not visited
            if (ary[c][i] < min) { // If the cost is less than the current minimum
                min = ary[c][i]; // Update the minimum cost
                kmin = i; // Update the index of the minimum cost city
            }
        }
    }

    if (min != 999) { // If a city is found with a minimum cost
        cost += min; // Add the cost to the total cost
    }
    return kmin; // Return the index of the minimum cost city
}

void mincost(int city) {
    completed[city] = 1; // Mark the current city as visited
    cout << city + 1 << "--->"; // Print the current city

    int ncity = least(city); // Find the next city with the minimum cost

    if (ncity == 0) { // If the last city is reached
        cout << ncity + 1 << endl; // Print the last city and end the line
        cost += ary[city][ncity]; // Add the cost of returning to the first city to the total cost
        return; // Return from the function
    }

    mincost(ncity); // Recursively call the function for the next city
}

int main() {
    takeInput(); // Take input for the cost matrix
    cout << "\n\nThe Path is:\n";
    mincost(0); // Starting vertex is 0
    cout << "\n\nMinimum cost is " << cost << endl; // Print the total cost
    return 0; // End the program
}
