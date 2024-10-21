#include <iostream>
#include <cstring>  
using namespace std;

void replaceSubstring(char sentence[], char toReplace[], char replaceWith[]) {
    char result[500];  
    int i = 0, j = 0;

    while (sentence[i] != '\0') {
        bool matchFound = true;
        
        for (int k = 0; toReplace[k] != '\0'; k++) {
            if (sentence[i + k] != toReplace[k]) {
                matchFound = false;
                break;
            }
        }

        if (matchFound) {
            // Copy the replaceWith string into result
            for (int k = 0; replaceWith[k] != '\0'; k++) {
                result[j++] = replaceWith[k];
            }
            i += strlen(toReplace);  // Move i ahead by the length of the toReplace string
        } else {
            // If no match, copy the current character
            result[j++] = sentence[i++];
        }
    }


    // Copy the result back into the original sentence
    strcpy(sentence, result);
}

int main() {
    char sentence[500], toReplace[100], replaceWith[100];

    cout << "Enter the sentence: ";
    cin.getline(sentence, 500);

    cout << "Enter the substring to replace: ";
    cin.getline(toReplace, 100);

    cout << "Enter the new substring: ";
    cin.getline(replaceWith, 100);

    replaceSubstring(sentence, toReplace, replaceWith);

    cout << "Modified sentence: " << sentence << endl;

    return 0;
}
