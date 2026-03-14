// WAP to Check Whether the Last Digit of a Number is Even or Odd
#include <iostream>
using namespace std;

int main() {
    int num, last;

    cout << "Enter a number: ";
    cin >> num;

    last = num % 10;

    if(last % 2 == 0)
        cout << "Last digit is Even";
    else
        cout << "Last digit is Odd";

    return 0;
} 
// WAP to Count Digits Greater Than 5 in a Number 
#include <iostream>
using namespace std;

int main() {
    int num, rem;
    int count = 0;

    cout << "Enter a number: ";
    cin >> num;

    while(num != 0) {
        rem = num % 10;

        if(rem > 5)
            count++;

        num /= 10;
    }

    cout << "Digits greater than 5 = " << count;

    return 0;
}