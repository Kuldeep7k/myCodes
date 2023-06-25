#include <iostream>

using namespace std;

// This function heapifies a subtree rooted with the node at index 'i' of the 'n' size heap.
void heapify(int arr[], int n, int i)
{
    // Initialize the largest element as the root
    int largest = i;

    // Find the left and right children of the root
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    // If the left child is larger than the root
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // If the right child is larger than the largest so far
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // If the largest is not the root
    if (largest != i)
    {
        // Swap the root with the largest element
        swap(arr[i], arr[largest]);

        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}

// This function performs the heap sort algorithm on the given array of size 'n'
void heapSort(int arr[], int n)
{
    // Build heap (rearrange the array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // One by one extract an element from the heap
    for (int i = n - 1; i >= 0; i--)
    {
        // Move current root to end
        swap(arr[0], arr[i]);

        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}

// This function prints the sorted array
void printArray(int arr[], int n)
{
    cout << "Sorted array is: ";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

// Driver code
int main()
{
    int n;

    // Ask the user for the number of elements in the array
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    // Ask the user to input the elements of the array
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Perform the heap sort algorithm on the array
    heapSort(arr, n);

    // Print the sorted array
    printArray(arr, n);

    return 0;
}
