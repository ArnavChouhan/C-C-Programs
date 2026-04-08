// WAP to Print the Square of the Last Digit of a Number
#include <iostream>
using namespace std;

int main() {
    int num, last;

    cout << "Enter a number: ";
    cin >> num;

    last = num % 10;

    cout << "Square of last digit = " << last * last;

    return 0;
}

// WAP to Check Whether the First Digit of a Number is Even or Odd
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    while(num >= 10) {
        num /= 10;
    }

    if(num % 2 == 0)
        cout << "First digit is Even";
    else
        cout << "First digit is Odd";

    return 0;
}