#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;

int main() {
    int number;

    //  1
    cout << "(Task 1) Enter a number greater than 0: ";
    cin >> number;
    while (number < 1) {
        cout << "Please enter a number greater than 0: ";
        cin >> number;
    }
    int sum = 0;
    for (int i = 0; i <= number; i++) {
        sum += i;
    }
    cout << "Sum from 0 to " << number << " is " << sum << endl;

    //  2
    cout << "\n(Task 2) Enter a number greater than 0: ";
    cin >> number;
    while (number < 1) {
        cout << "Please enter a number greater than 0: ";
        cin >> number;
    }
    long long factorial = 1;
    for (int i = 1; i <= number; i++) {
        factorial *= i;
    }
    cout << "Factorial of " << number << " is " << factorial << endl;

    //  3
    cout << "\n(Task 3) Enter a number greater than 0: ";
    cin >> number;
    while (number < 1) {
        cout << "Please enter a number greater than 0: ";
        cin >> number;
    }
    for (int i = 1; i <= 10; i++) {
        cout << number << " * " << i << " = " << number * i << endl;
    }

    //  4
    cout << "\n(Task 4) Enter line width (more than 0): ";
    cin >> number;
    while (number < 1) {
        cout << "Please enter a number greater than 0: ";
        cin >> number;
    }
    system("Color 1F");
    for (int i = 0; i < number; i++) {
        cout << "-";
    }
    cout << endl;

    //  5
    cout << "\n(Task 5) Enter line height (more than 0): ";
    cin >> number;
    while (number < 1) {
        cout << "Please enter a number greater than 0: ";
        cin >> number;
    }
    system("Color 4E");
    for (int i = 0; i < number; i++) {
        cout << "|" << endl;
    }

    //  6
    cout << "\n(Task 6) Multiplication table from 1 to 10:\n";
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            cout << i << " * " << j << " = " << i * j << endl;
        }
    }

    //  7
    cout << "\n(Task 7) Multiplication table:\n";
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            cout << setw(4) << i * j;
        }
        cout << endl;
    }

    return 0;
}
