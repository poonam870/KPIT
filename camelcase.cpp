#include <iostream>
#include <string>
#include <cctype>
using namespace std;
void convertCamelCase(string& s) {
    string currentWord;
    for (char c : s) {
        if (islower(c)) {
            currentWord+=toupper(c);
        } else {
            if (!currentWord.empty()) {
                cout << currentWord <<endl;
                currentWord.clear();
            }
            if (isupper(c)) {
                currentWord +=tolower(c);
            } else {
                currentWord +=toupper(c);
            }
        }
    }
    if (!currentWord.empty()) {
        cout << currentWord <<endl;
    }
}
int main() {
    string s = "aAnThe";
    convertCamelCase(s);
    return 0;
}
/* output:
A
aN
tHE

*/
