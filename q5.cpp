#include <iostream>
using namespace std;


void displayArray(int arr[], int size, int index) {
    
    if (index == size) {
        return;
    }

    
    cout << arr[index] << " ";

    
    displayArray(arr, size, index + 1);
}

int main() {
    
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array elements: ";
    displayArray(arr, size, 0); 
    cout << endl;

    return 0;
}
