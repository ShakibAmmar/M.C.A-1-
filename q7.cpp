#include <iostream>
using namespace std;

// Recursive function to find the maximum element in the array
int findMax(int arr[], int size) {
    // Base case: if size is 1, return the only element
    if (size == 1) {
        return arr[0];
    }

    // Recursive case: get the maximum of the rest of the array
    int maxOfRest = findMax(arr, size - 1);

    // Return the maximum between the last element and the max of the rest
    return (arr[size - 1] > maxOfRest) ? arr[size - 1] : maxOfRest;
}

// Recursive function to find the minimum element in the array
int findMin(int arr[], int size) {
    // Base case: if size is 1, return the only element
    if (size == 1) {
        return arr[0];
    }

    // Recursive case: get the minimum of the rest of the array
    int minOfRest = findMin(arr, size - 1);

    // Return the minimum between the last element and the min of the rest
    return (arr[size - 1] < minOfRest) ? arr[size - 1] : minOfRest;
}

int main() {
    int size;

    // Ask the user for the size of the array
    cout << "Enter the number of elements in the array: ";
    cin >> size;

    // Create an array of the specified size
    int* arr = new int[size];

    // Input array elements from the user
    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Element " << (i + 1) << ": ";
        cin >> arr[i];
    }

    // Calculate the maximum and minimum using the recursive functions
    int maxElement = findMax(arr, size);
    int minElement = findMin(arr, size);

    // Output the results
    cout << "The maximum element in the array is: " << maxElement << endl;
    cout << "The minimum element in the array is: " << minElement << endl;

    // Free the dynamically allocated memory
    delete[] arr;

    return 0;
}