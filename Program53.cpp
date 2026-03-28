// WAP to Count Total Digits in a Number
#include <iostream>
using namespace std;

int main() {
    int num, count = 0;

    cout << "Enter a number: ";
    cin >> num;

    while(num != 0) {
        num /= 10;
        count++;
    }

    cout << "Total digits = " << count;

    return 0;
}

// WAP to Find the Last Digit of a Number
#include <iostream>
using namespace std;

int main() {
    int num, last;

    cout << "Enter a number: ";
    cin >> num;

    last = num % 10;

    cout << "Last digit = " << last;

    return 0;
}