// WAP to Find the Second Largest Digit in a Number
#include <iostream>
using namespace std;

int main() {
    int num, rem;
    int largest = -1, secondLargest = -1;

    cout << "Enter a number: ";
    cin >> num;

    while(num != 0) {
        rem = num % 10;

        if(rem > largest) {
            secondLargest = largest;
            largest = rem;
        }
        else if(rem > secondLargest && rem != largest) {
            secondLargest = rem;
        }

        num /= 10;
    }

    if(secondLargest == -1)
        cout << "No second largest digit";
    else
        cout << "Second largest digit = " << secondLargest;

    return 0;
}

// WAP to Check Whether All Digits of a Number are Same
#include <iostream>
using namespace std;

int main() {
    int num, rem;
    bool same = true;

    cout << "Enter a number: ";
    cin >> num;

    int lastDigit = num % 10;

    while(num != 0) {
        rem = num % 10;

        if(rem != lastDigit) {
            same = false;
            break;
        }

        num /= 10;
    }

    if(same)
        cout << "All digits are same";
    else
        cout << "Digits are not same";

    return 0;
}