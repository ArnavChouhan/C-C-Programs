 
// 
// WAP to Check Whether All Digits of a Number are Even
#include <iostream>
using namespace std;

int main() {
    int num, rem;
    bool allEven = true;

    cout << "Enter a number: ";
    cin >> num;

    while(num != 0) {
        rem = num % 10;

        if(rem % 2 != 0) {
            allEven = false;
            break;
        }

        num /= 10;
    }

    if(allEven)
        cout << "All digits are even";
    else
        cout << "Not all digits are even";

    return 0;
}

// WAP to Check Whether All Digits of a Number are Odd
#include <iostream>
using namespace std;

int main() {
    int num, rem;
    bool allOdd = true;

    cout << "Enter a number: ";
    cin >> num;

    while(num != 0) {
        rem = num % 10;

        if(rem % 2 == 0) {
            allOdd = false;
            break;
        }

        num /= 10;
    }

    if(allOdd)
        cout << "All digits are odd";
    else
        cout << "Not all digits are odd";

    return 0;
}