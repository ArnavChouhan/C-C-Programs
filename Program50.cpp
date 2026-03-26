// WAP to Find the Sum of First Half Digits of a Number
#include <iostream>
using namespace std;

int main() {
    int num, temp, rem;
    int count = 0, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    temp = num;

    // Count digits
    while(temp != 0) {
        count++;
        temp /= 10;
    }

    int half = count / 2;

    // Remove last half digits
    for(int i = 0; i < half; i++) {
        num /= 10;
    }

    // Sum remaining digits
    while(num != 0) {
        rem = num % 10;
        sum += rem;
        num /= 10;
    }

    cout << "Sum of first half digits = " << sum;

    return 0;
}


// WAP to Find the Sum of Last Half Digits of a Number
#include <iostream>
using namespace std;

int main() {
    int num, rem;
    int count = 0, sum = 0;
    int temp;

    cout << "Enter a number: ";
    cin >> num;

    temp = num;

    // Count digits
    while(temp != 0) {
        count++;
        temp /= 10;
    }

    int half = count / 2;

    // Sum last half digits
    for(int i = 0; i < half; i++) {
        rem = num % 10;
        sum += rem;
        num /= 10;
    }

    cout << "Sum of last half digits = " << sum;

    return 0;
}