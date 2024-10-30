#include <iostream>
using namespace std;

// Recursive function to solve Tower of Hanoi
void towerOfHanoi(int n, char source, char destination, char auxiliary) {
    // Base case: if there is only one disk, move it directly
    if (n == 1) {
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        return;
    }

    // Move n-1 disks from source to auxiliary, using destination as auxiliary
    towerOfHanoi(n - 1, source, auxiliary, destination);

    // Move the nth disk from source to destination
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;

    // Move the n-1 disks from auxiliary to destination, using source as auxiliary
    towerOfHanoi(n - 1, auxiliary, destination, source);
}

int main() {
    int n;

    // Ask the user for the number of disks
    cout << "Enter the number of disks: ";
    cin >> n;

    // Solve the Tower of Hanoi problem
    cout << "The sequence of moves involved in the Tower of Hanoi are:" << endl;
    towerOfHanoi(n, 'A', 'C', 'B'); // A, B and C are names of rods

    return 0;
}