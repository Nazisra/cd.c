#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();  // ignore newline after number input

    string s;
    getline(cin, s);

    string letters;
    for (char ch : s) {
        if (isalpha(ch)) {
            letters.push_back(tolower(ch));
        }
    }

    sort(letters.begin(), letters.end());
    auto last = unique(letters.begin(), letters.end());
    letters.erase(last, letters.end());

    if (letters.size() == 26) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
