#include <iostream>
#include <algorithm>
using namespace std;

// Define an item struct to represent each item in the knapsack
struct Item {
    int value, weight;
    double ratio; // value-to-weight ratio for sorting
};

// Define a comparison function to sort items in descending order by ratio
bool compare(Item a, Item b) {
    return a.ratio > b.ratio;
}

// Define a function to solve the fractional knapsack problem
double fractionalKnapsack(int W, Item arr[], int n) {
    // Sort the items by their value-to-weight ratio
    sort(arr, arr + n, compare);

    // Initialize variables to keep track of current weight and total value
    int currentWeight = 0;
    double finalValue = 0.0;

    // Iterate through each item in the sorted array
    for (int i = 0; i < n; i++) {
        // If adding the current item's weight won't exceed the knapsack's capacity, add it to the knapsack
        if (currentWeight + arr[i].weight <= W) {
            currentWeight += arr[i].weight;
            finalValue += arr[i].value;
        } else {
            // If adding the current item's weight will exceed the knapsack's capacity, add a fraction of the item
            int remainingWeight = W - currentWeight;
            finalValue += arr[i].ratio * remainingWeight;
            break;
        }
    }

    // Return the maximum total value that can be obtained from the knapsack
    return finalValue;
}

int main() {
    // Prompt the user to enter the capacity of the knapsack
    int W;
    cout << "Enter the capacity of the knapsack: ";
    cin >> W;

    // Prompt the user to enter the number of items
    int n;
    cout << "Enter the number of items: ";
    cin >> n;

    // Prompt the user to enter the value and weight of each item, and calculate its ratio
    Item arr[n];
    cout << "Enter the value and weight of each item:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i].value >> arr[i].weight;
        arr[i].ratio = (double) arr[i].value / arr[i].weight;
    }

    // Call the fractionalKnapsack function with the knapsack capacity and array of items, and print the result
    double maxTotalValue = fractionalKnapsack(W, arr, n);
    cout << "The maximum value that can be obtained from the knapsack is: " << maxTotalValue << endl;

    return 0;
}











// Enter the capacity of the knapsack: 15
// Enter the number of items: 7
// Enter the value and weight of each item:
// 5 1
// 10 2
// 15 3
// 8 2
// 6 4
// 5 3
// 9 3
// The maximum value that can be obtained from the knapsack is: 53.5