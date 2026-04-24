// WAP to Check Whether a Number Contains Digit 8 or Not
#include <iostream>
using namespace std;

int main() {
    int num, rem;
    bool found = false;

    cout << "Enter a number: ";
    cin >> num;

    while(num > 0) {
        rem = num % 10;

        if(rem == 8) {
            found = true;
            break;
        }

        num /= 10;
    }

    if(found)
        cout << "Digit 8 is present";
    else
        cout << "Digit 8 is not present";

    return 0;
}

// WAP to Find the Sum of Digits That Are Greater Than 4
#include <iostream>
using namespace std;

int main() {
    int num, rem, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    while(num > 0) {
        rem = num % 10;

        if(rem > 4)
            sum += rem;

        num /= 10;
    }

    cout << "Sum of digits greater than 4 = " << sum;

    return 0;
}