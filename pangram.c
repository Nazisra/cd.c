#include <iostream>
#include <string>
#include <algorithm> // for sort and unique
#include <cctype>    // for tolower, isalpha

using namespace std;

bool isPangram(const string& str) {
    string letters;

    // Extract alphabets and convert to lowercase
    for (char ch : str) {
        if (isalpha(ch)) {
            letters.push_back(tolower(ch));
        }
    }

    // Sort the string
    sort(letters.begin(), letters.end());

    // Remove consecutive duplicates
    auto last = unique(letters.begin(), letters.end());

    // Resize string to contain only unique letters
    letters.erase(last, letters.end());

    // Check if size == 26
    return letters.size() == 26;
}

int main() {
    string input;
    cout << "Enter a sentence: ";
    getline(cin, input);

    if (isPangram(input)) {
        cout << "The sentence is a pangram." << endl;
    } else {
        cout << "The sentence is NOT a pangram." << endl;
    }

    return 0;
}
