/* Implement a C++ Program to input any string and count the Number of  Occurrence of 
each Character. Also count number of vowels, number of  uppercase, number of lowercase, 
number of digit and number of characters   in a given string.
*/

// for all c++ models 



#include <iostream>
#include <cctype> // For isalpha, isdigit, etc.
using namespace std;

int main() {
    string input;
    int vowels = 0, uppercase = 0, lowercase = 0, digits = 0, totalCharacters = 0;
    int freq[256] = {0}; // Array to store frequency of each character (ASCII)

    // Input string from the user
    cout << "Enter a string: ";
    getline(cin, input);

    // Iterate over each character in the string
    for (int i = 0; i < input.length(); i++) {
        char ch = input[i];
    

        totalCharacters++;   // Count total characters

        // Update character frequency
        freq[(int)ch]++;

        // Check for uppercase, lowercase, vowels, and digits
        if (isupper(ch)) {
            uppercase++;
        }
        if (islower(ch)) {
            lowercase++;
        }
        if (isdigit(ch)) {
            digits++;
        }

        // Check for vowels (both uppercase and lowercase)
        char lowerCh = tolower(ch);
        if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u') {
            vowels++;
        }
    }

    // Display results
    cout << "Character Frequency:" << endl;
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            cout << (char)i << " : " << freq[i] << endl;
        }
    }

    cout << "Number of Vowels: " << vowels << endl;
    cout << "Number of Uppercase Letters: " << uppercase << endl;
    cout << "Number of Lowercase Letters: " << lowercase << endl;
    cout << "Number of Digits: " << digits << endl;
    cout << "Total Number of Characters: " << totalCharacters << endl;

    return 0;
}
