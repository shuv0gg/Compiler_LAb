#include <bits/stdc++.h>
using namespace std;

bool func(const string& str) {
    int n = str.length();
    if (n < 2)
        return false;
    return str[n - 2] == '0' && str[n - 1] == '1';
}

bool isBinary(const string& str) {
    for (char ch : str) {
        if (ch != '0' && ch != '1')
            return false;
    }
    return true;
}
int main() {
    int n;
    cout << "Enter number of test cases: ";
    cin >> n;

    string input;
    while (n--) {
        cout << "Enter a binary string: ";
        cin >> input;

        if (!isBinary(input)) {
            cout << "Invalid" << endl;
        }
        else if (func(input)) {
            cout << "Accepted" << endl;
        }
        else {
            cout << "Rejected" << endl;
        }
    }

    return 0;
}
