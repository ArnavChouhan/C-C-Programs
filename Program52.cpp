// WAP to Count Digits Equal to 0 in a Number
#include <iostream>
using namespace std;

int main() {
    int num, rem, count = 0;

    cout << "Enter a number: ";
    cin >> num;

    while(num != 0) {
        rem = num % 10;

        if(rem == 0)
            count++;

        num /= 10;
    }

    cout << "Number of zeros = " << count;

    return 0;
}


// WAP to Find the Sum of First and Last Digit of a Number
#include <iostream>
using namespace std;

int main() {
    int num, first, last;

    cout << "Enter a number: ";
    cin >> num;

    last = num % 10;

    while(num >= 10) {
        num /= 10;
    }

    first = num;

    cout << "Sum of first and last digit = " << first + last;

    return 0;
}