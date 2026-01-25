#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    // Ask for the number of strings
    if (!(cin >> n)) return 0;

    int emailCount = 0;
    int websiteCount = 0;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        bool hasAtSymbol = false;
        bool hasDotSymbol = false;

        // Manual iteration through the string to avoid built-in functions like .find()
        int length = 0;
        while (s[length] != '\0') {
            if (s[length] == '@') {
                hasAtSymbol = true;
            }
            if (s[length] == '.') {
                hasDotSymbol = true;
            }
            length++;
        }

        // Identification logic
        if (hasAtSymbol) {
            // It is an Email if it contains '@'
            emailCount++;
            cout << "Email: " << emailCount << endl;
        } else if (hasDotSymbol) {
            // It is a Website if it contains '.' but no '@'
            websiteCount++;
            cout << "Website: " << websiteCount << endl;
        }
    }

    return 0;
}