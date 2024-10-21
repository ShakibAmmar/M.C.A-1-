#include <iostream>
#include <cstring>  
using namespace std;

int findSubstring(char S[], char T[]) {
    int lenS = strlen(S);  
    int lenT = strlen(T);  

    for (int i = 0; i <= lenS; i++) {  
        int j;
        
        // Check if substring T matches starting at index i
        for (j = 0; j < lenT; j++) {
            if (S[i + j] != T[j]) {
                break;  
            }
        }

        // If complete substring T matched in S
        if (j == lenT) {
            return i ;  
        }
    }
    
    return 1;  
}

int main() {
    char S[500], T[100];
    cout << "Enter the main string (S): ";
    cin.getline(S, 500);
    cout << "Enter the substring (T): ";
    cin.getline(T, 100);
    int position = findSubstring(S, T);
    cout << "The position where T begins: " << position << endl;

    return 0;
}
