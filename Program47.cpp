// WAP to Check Whether a Number is Palindrome or Not
#include <iostream>
using namespace std;

int main() {
    int num, rem, reverse = 0;
    int original;

    cout << "Enter a number: ";
    cin >> num;

    original = num;

    while(num != 0) {
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num /= 10;
    }

    if(reverse == original)
        cout << "Palindrome number";
    else
        cout << "Not a Palindrome number";

    return 0;
}


// WAP to Check Whether a Number is Buzz Number
#include <iostream>
using namespace std;

int main() {
    int num, lastDigit;

    cout << "Enter a number: ";
    cin >> num;

    lastDigit = num % 10;

    if(num % 7 == 0 || lastDigit == 7)
        cout << "Buzz number";
    else
        cout << "Not a Buzz number";

    return 0;
}