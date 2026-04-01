// WAP to Find the First Digit of a Number 
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    while(num >= 10) {
        num /= 10;
    }

    cout << "First digit = " << num;

    return 0;
}

// WAP to Print the Reverse of a Number 
#include <iostream>
using namespace std;

int main() {
    int num, rem, reverse = 0;

    cout << "Enter a number: ";
    cin >> num;

    while(num != 0) {
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num /= 10;
    }

    cout << "Reverse = " << reverse;

    return 0;
}