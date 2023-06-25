#include <iostream>
using namespace std;

int knapSack(int W, int wt[], int val[], int n) {
    int K[n + 1][W + 1];
    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= W; w++) {
            if (i == 0 || w == 0)
                K[i][w] = 0;
            else if (wt[i - 1] <= w)
                K[i][w] = max(val[i - 1] + K[i - 1][w - wt[i - 1]], K[i - 1][w]);
            else
                K[i][w] = K[i - 1][w];
        }
    }

    return K[n][W];
}

int main() {
    int n;
    cout << "Enter the number of items: ";
    cin >> n;

    int val[n], wt[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter the value and weight of item " << i+1 << ": ";
        cin >> val[i] >> wt[i];
    }

    int W;
    cout << "Enter the maximum weight: ";
    cin >> W;

    cout << "The maximum value that can be put in a knapsack of capacity " << W << " is " << knapSack(W, wt, val, n) << endl;
    
    return 0;
}
