#include <iostream>
#include <cstdlib>

using namespace std;

const int MAX_N = 10; // Maximum board size

int N; // Board size
int board[MAX_N][MAX_N]; // The board itself
bool rows[MAX_N]; // Which rows are occupied
bool left_diagonals[MAX_N * 2 - 1]; // Which left diagonals are occupied
bool right_diagonals[MAX_N * 2 - 1]; // Which right diagonals are occupied

// Function for printing the solution
void printSol() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << board[i][j] << " ";
        }
        cout << "\n";
    }
}

// Check if it is safe to place a queen in the current cell
bool isSafe(int row, int col) {
    if (rows[row] || left_diagonals[row + col] || right_diagonals[col - row + N - 1]) {
        return false;
    }
    return true;
}

// Recursive function to solve N-queen Problem
bool solve(int col) {
    // Base case: If all queens are placed
    if (col >= N) {
        return true;
    }
    // Consider this column and move in all rows one by one
    for (int i = 0; i < N; i++) {
        if (isSafe(i, col)) {
            rows[i] = true;
            left_diagonals[i + col] = true;
            right_diagonals[col - i + N - 1] = true;
            board[i][col] = 1; // Placing the queen in board[i][col]
            // Recur to place rest of the queens
            if (solve(col + 1)) {
                return true;
            }
            // Backtracking
            rows[i] = false;
            left_diagonals[i + col] = false;
            right_diagonals[col - i + N - 1] = false;
            board[i][col] = 0; // Removing the queen from board[i][col]
        }
    }
    return false;
}

int main() {
    // Taking input from the user
    cout << "Enter the number of rows for the square board (maximum " << MAX_N << "): ";
    cin >> N;
    if (N > MAX_N) {
        cerr << "Error: Maximum board size exceeded!\n";
        exit(EXIT_FAILURE);
    }
    // Initializing the board and arrays
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            board[i][j] = 0;
        }
        rows[i] = false;
    }
    for (int i = 0; i < N * 2 - 1; i++) {
        left_diagonals[i] = false;
        right_diagonals[i] = false;
    }
    bool ans = solve(0);
    if (ans) {
        // Printing the solution board
        printSol();
    } else {
        cout << "Solution does not exist\n";
    }
    return 0;
}
