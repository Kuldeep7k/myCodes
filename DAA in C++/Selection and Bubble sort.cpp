#include <iostream>

using namespace std;

// function to swap two numbers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// function to implement selection sort
void selectionSort(int arr[], int n) {
    int i, j, minIndex;

    for (i = 0; i < n-1; i++) {
        // find the minimum element in the unsorted part of the array
        minIndex = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // swap the minimum element with the first element in the unsorted part of the array
        swap(&arr[minIndex], &arr[i]);
    }
}

// function to implement bubble sort
void bubbleSort(int arr[], int n) {
    int i, j;

    for (i = 0; i < n-1; i++) {
        // loop through the array and swap adjacent elements if they are in the wrong order
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

// function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // selection sort
    selectionSort(arr, n);
    cout << "Array sorted using selection sort: ";
    printArray(arr, n);

    // bubble sort
    bubbleSort(arr, n);
    cout << "Array sorted using bubble sort: ";
    printArray(arr, n);

    return 0;
}
