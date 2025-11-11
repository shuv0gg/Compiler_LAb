#include <iostream>
#include <string>
using namespace std;

bool func(const string& str) {
    int state = 0;

    for (char c : str) {
        if (c != 'a' && c != 'b') {
            cout << "Invalid" << endl;
            return false;
        }
        switch (state) {
            case 0:
                if (c == 'a') state = 0;
                else if (c == 'b') state = 1;
                break;
            case 1:
                if (c == 'a') state = 0;
                else if (c == 'b') state = 2;
                break;
            case 2:
                state = 2;
                break;
        }
    }
    return (state != 2);
}
int main() {
    int n;
    cout << "Enter number of test cases: ";
    cin >> n;

    while (n--) {
        string s;
        cout << "Enter a string: ";
        cin >> s;

        if (func(s))
            cout << "Accepted " << endl;
        else
            cout << "Rejected " << endl;
    }

    return 0;
}
