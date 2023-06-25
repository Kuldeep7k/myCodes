#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void QuickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int mid = partition(arr, low, high);
        QuickSort(arr, low, mid - 1);
        QuickSort(arr, mid + 1, high);
    }
}

int main()
{
    int n, i;
    cout << "Enter the number of elements to be sorted: :";
    cin >> n;
    int arr[n];
    cout << "Enter the Elements :";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    QuickSort(arr, 0, n - 1);
    cout << "Sorted array: \n";

    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
        
    }

    return 0;
}




























// #include <iostream>

// using namespace std;

// void quickSort(int arr[], int left, int right) {
//   int i = left, j = right;
//   int pivot = arr[(left + right) / 2];

//   while (i <= j) {
//     while (arr[i] < pivot) {
//       i++;
//     }
//     while (arr[j] > pivot) {
//       j--;
//     }
//     if (i <= j) {
//       swap(arr[i], arr[j]);
//       i++;
//       j--;
//     }
//   }

//   if (left < j) {
//     quickSort(arr, left, j);
//   }
//   if (i < right) {
//     quickSort(arr, i, right);
//   }
// }

// int main() {
//   int n, input;

//   cout << "Enter the number of elements to be sorted: ";
//   cin >> n;

//   int arr[n];

//   cout << "Enter the elements: ";
//   for (int i = 0; i < n; i++) {
//     cin >> input;
//     arr[i] = input;
//   }

//   quickSort(arr, 0, n - 1);

//   cout << "The sorted array is: ";
//   for (int i = 0; i < n; i++) {
//     cout << arr[i] << " ";
//   }

//   return 0;
// }
