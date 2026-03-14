// WAP to Find the Sum of First and Last Digit of a Number
#include <iostream>
using namespace std;

int main() {
    int num, rem, first, last;

    cout << "Enter a number: ";
    cin >> num;

    last = num % 10;

    while(num >= 10) {
        num = num / 10;
    }

    first = num;

    cout << "Sum of first and last digit = " << first + last;

    return 0;
} 

// WAP to Check Whether a Number Contains Digit 0 or Not 
#include <iostream>
using namespace std;

int main() {
    int num, rem;
    bool found = false;

    cout << "Enter a number: ";
    cin >> num;

    while(num != 0) {
        rem = num % 10;

        if(rem == 0) {
            found = true;
            break;
        }

        num /= 10;
    }

    if(found)
        cout << "Number contains digit 0";
    else
        cout << "Number does not contain digit 0";

    return 0;
}
