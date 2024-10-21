#include <iostream>
#include <cstring> 
using namespace std;

void insertSubstring(char mainStr[], char subStr[], int position) {
    int mainLen = strlen(mainStr);
    int subLen = strlen(subStr);

    if (position < 0 || position > mainLen) {
        cout << "Invalid position for insertion." << endl;
        return;
    }

    for (int i = mainLen; i >= position; i--) {
        mainStr[i + subLen] = mainStr[i]; //move right
    }

    for (int i = 0; i < subLen; i++) {
        mainStr[position + i] = subStr[i];
    }

}

void deleteCharacters(char mainStr[], int position, int n) {
    int mainLen = strlen(mainStr);

    if (position < 0 || position + n > mainLen) {
        cout << "Invalid position or number of characters to delete." << endl;
        return;
    }

    for (int i = position; i <= mainLen - n; i++) {
        mainStr[i] = mainStr[i + n]; // move left
    }

}

int main() {
    char mainStr[100], subStr[50];
    int position, n;

    cout << "Enter the main string: ";
    cin.getline(mainStr, 100);

    cout << "Enter the substring to insert: ";
    cin.getline(subStr, 50);
    cout << "Enter the position to insert the substring: ";
    cin >> position;

    insertSubstring(mainStr, subStr, position);
    cout << "String after insertion: " << mainStr << endl;

    cout << "Enter the position to start deleting characters: ";
    cin >> position;
    cout << "Enter the number of characters to delete: ";
    cin >> n;

    deleteCharacters(mainStr, position, n);
    cout << "String after deletion: " << mainStr << endl;

    return 0;
}
