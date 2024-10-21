#include <iostream>
#include <cstring>  
using namespace std;

int countWordOccurrences(char text[], char word[]) {
    int count = 0;
    int i = 0, j = 0;
    int textLength = strlen(text);
    int wordLength = strlen(word);

    // Loop through each character of the text
    while (i <= textLength ) {
        // Check if the word matches at the current position
        for (j = 0; j < wordLength; j++) {
            if (text[i + j] != word[j]) {
                break;
            }
        }
        // If the word matches
        if (j == wordLength && (text[i + j] == ' ' || text[i + j] == '\0')) {
            count++;
        }
        i++;
    }
    return count;
}

int main() {
    char text[500], word[100];

    cout << "Enter a line of text: ";
    cin.getline(text, 500);

    cout << "Enter the word to count: ";
    cin.getline(word, 100);

    int count = countWordOccurrences(text, word);

    cout << "The word '" << word << "' occurs " << count << " times in the text." << endl;

    return 0;
}
