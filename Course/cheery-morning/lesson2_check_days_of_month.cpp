#include <iostream>

using namespace std;

int main() {
    int month, year;
    cout << "Enter month and year: ";
    cin >> month >> year;
    if (month < 1 || month > 12 || year < 0) {
        cout << "Invalid month or year" << endl;
    } else {
        if (month == 2) {
            if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
                cout << "29 days" << endl;
            } else {
                cout << "28 days" << endl;
            }
        } else if (month == 4 || month == 6 || month == 9 || month == 11) {
            cout << "30 days" << endl;
        } else {
            cout << "31 days" << endl;
        }
    }
    return 0;
}