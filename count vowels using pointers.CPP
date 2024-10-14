#include <iostream>
#include <cstring>
using namespace std;

int countVowels(const char* str) {
    int count = 0;
    const char* ptr = str;

    while (*ptr != '\0') {
        char ch = tolower(*ptr); 
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
        ptr++;
    }

    return count;
}

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    int vowelsCount = countVowels(str);
    cout << "Number of vowels: " << vowelsCount << endl;

    return 0;
}
