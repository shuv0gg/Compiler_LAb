#include <bits/stdc++.h>
using namespace std;

bool func(const string& str) {
    int state = 0;
    for (char ch : str) {
        if (ch == '1') {
            state = 1 - state;
        }
    }
    return (state == 0);
}
int main() {
    int n;
    cout << "Enter number of test cases: ";
    cin >> n;
    string input;
    while (n--) {
        cout << "Enter a binary string: ";
        cin >> input;
        bool valid = true;
        for (char c : input) {
            if (c != '0' && c != '1') {
                valid = false;
                break;
            }
        }
        if (!valid) {
            cout << "Invalid" << endl;
        }
        else if (func(input)) {
            cout << "Accepted (Even number of 1s)" << endl;
        }
        else {
            cout << "Rejected (Odd number of 1s)" << endl;
        }
    }
    return 0;
}
