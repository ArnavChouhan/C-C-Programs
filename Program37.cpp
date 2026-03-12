//   WAP to Find the Last Digit of a Number  
#include <iostream>
using namespace std;

int main() {
    int num, lastDigit;

    cout << "Enter a number: ";
    cin >> num;

    lastDigit = num % 10;

    cout << "Last digit = " << lastDigit;

    return 0;
} 

// WAP to Print the Digits of a Number in Reverse Order
#include <iostream>
using namespace std;

int main() {
    int num, rem;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Digits in reverse order: ";

    while(num != 0) {
        rem = num % 10;
        cout << rem << " ";
        num /= 10;
    }

    return 0;
} 