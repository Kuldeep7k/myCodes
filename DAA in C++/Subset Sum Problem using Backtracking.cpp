#include <iostream>

// function to display the subset
void displaySubset(int subSet[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << subSet[i] << "  ";
    }
    std::cout << std::endl;
}

// function to find the subsets that add up to the given sum
void subsetSum(int set[], int subSet[], int n, int subSize, int total, int nodeCount, int sum)
{
    if (total == sum)
    {
        // if the total of the subset is equal to the given sum,
        // then display the subset and move on to the next subset
        displaySubset(subSet, subSize);
        subsetSum(set, subSet, n, subSize - 1, total - set[nodeCount], nodeCount + 1, sum);
        return;
    }
    else
    {
        // iterate over the remaining elements in the set
        for (int i = nodeCount; i < n; i++)
        {
            // add the current element to the subset and check if the total is equal to the sum
            subSet[subSize] = set[i];
            subsetSum(set, subSet, n, subSize + 1, total + set[i], i + 1, sum);
        }
    }
}

// function to find the subsets that add up to the given sum
void findSubset(int set[], int size, int sum)
{
    int *subSet = new int[size]; // create subset array to pass parameter of subsetSum
    subsetSum(set, subSet, size, 0, 0, 0, sum); // call subsetSum with initial parameters
    delete[] subSet; // free the memory allocated for the subset array
}

// main function
int main()
{
    int size;
    std::cout << "Enter the size of the set: ";
    std::cin >> size;

    int* weights = new int[size];
    std::cout << "Enter the elements of the set:\n";
    for (int i = 0; i < size; i++)
    {
        std::cin >> weights[i];
    }

    int sum;
    std::cout << "Enter the desired sum: ";
    std::cin >> sum;

    std::cout << std::endl;
    std::cout << "The subsets of the set that add up to the desired sum are:" << std::endl;
    findSubset(weights, size, sum); // call the function to find the subsets that add up to the given sum

    delete[] weights; // free the memory allocated for the weights array
    return 0;
}



// Enter the size of the set: 7
// Enter the elements of the set:
// 10 7 5 18 12 20 15
// Enter the desired sum: 35
// 10  7  18  
// 10  5  20
// 5  18  12
// 20  15