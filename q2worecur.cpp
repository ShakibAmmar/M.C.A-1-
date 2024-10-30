#include <iostream>
#include <cmath> // For pow function
using namespace std;

// Function to perform the Tower of Hanoi iteratively
void towerOfHanoiIterative(int n) {
    // There are 2^n - 1 moves required for n disks
    int totalMoves = pow(2, n) - 1;

    // If the number of disks is even, swap the destination and auxiliary pegs
    char source = 'A', destination = 'C', auxiliary = 'B';
    if (n % 2 == 0) {
        swap(destination, auxiliary);
    }

    // Perform the moves
    for (int i = 1; i <= totalMoves; i++) {
        int from, to;

        // Determine the from and to pegs based on the move number
        if (i % 3 == 1) {
            from = source;
            to = destination;
        } else if (i % 3 == 2) {
            from = source;
            to = auxiliary;
        } else {
            from = auxiliary;
            to = destination;
        }

        // Move the disk
        cout << "Move disk " << (i % 2 == 0 ? i / 2 : (i + 1) / 2) << " from " << from << " to " << to << endl;
    }
}

int main() {
    int n;

    // Ask the user for the number of disks
    cout << "Enter the number of disks: ";
    cin >> n;

    // Solve the Tower of Hanoi problem iteratively
    cout << "The sequence of moves involved in the Tower of Hanoi are:" << endl;
    towerOfHanoiIterative(n);

    return 0;
}