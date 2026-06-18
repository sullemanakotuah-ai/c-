#include <iostream>
using namespace std;

int main() {
    int first, second;

    cout << "Enter first integer: ";
    cin >> first;

    cout << "Enter second integer: ";
    cin >> second;

    if (first > second)
        cout << "First value is greater" << endl;
    else
        cout << "Second value is greater" << endl;

    return 0;
}
