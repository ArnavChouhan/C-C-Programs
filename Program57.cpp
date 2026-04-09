// WAP to Count Digits Equal to 9 in a Number
#include <iostream>
using namespace std;

int main() {
    int num, rem, count = 0;

    cout << "Enter a number: ";
    cin >> num;

    while(num != 0) {
        rem = num % 10;

        if(rem == 9)
            count++;

        num /= 10;
    }

    cout << "Count of digit 9 = " << count;

    return 0;
}

// WAP to Print Double of Each Digit of a Number
#include <iostream>
using namespace std;

int main() {
    int num, rem;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Double of digits: ";

    while(num != 0) {
        rem = num % 10;
        cout << rem * 2 << " ";
        num /= 10;
    }

    return 0;
}