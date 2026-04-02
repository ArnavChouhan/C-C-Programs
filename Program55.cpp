// WAP to Check Whether the Last Digit of a Number is 5 or Not
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if(num % 10 == 5)
        cout << "Last digit is 5";
    else
        cout << "Last digit is not 5";

    return 0;
}


// WAP to Find the Sum of Last Two Digits of a Number
#include <iostream>
using namespace std;

int main() {
    int num, last, secondLast;

    cout << "Enter a number: ";
    cin >> num;

    last = num % 10;
    secondLast = (num / 10) % 10;

    cout << "Sum of last two digits = " << last + secondLast;

    return 0;
}