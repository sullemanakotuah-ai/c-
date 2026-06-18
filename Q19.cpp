#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    long long binary;
    int decimal = 0, base = 1, remainder;

    cout << "Enter a binary number: ";
    cin >> binary;

    long long temp = binary;

    while (temp > 0) {
        remainder = temp % 10;
        decimal += remainder * base;
        base *= 2;
        temp /= 10;
    }

    cout << "Decimal      : " << decimal << endl;
    cout << "Hexadecimal  : " << hex << uppercase << decimal << endl;
    cout << "Octal        : " << oct << decimal << endl;

    return 0;
}
