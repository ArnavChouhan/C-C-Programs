// WAP to Find the Count of Digits Equal to 1 in a Number
#include <iostream>
using namespace std;

int main() {
    int num, rem;
    int count = 0;

    cout << "Enter a number: ";
    cin >> num;

    while(num != 0) {
        rem = num % 10;

        if(rem == 1)
            count++;

        num /= 10;
    }

    cout << "Count of digit 1 = " << count;

    return 0;
}

// WAP to Find the Sum of Digits Greater Than 5 in a Number
#include <iostream>
using namespace std;

int main() {
    int num, rem;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    while(num != 0) {
        rem = num % 10;

        if(rem > 5)
            sum += rem;

        num /= 10;
    }

    cout << "Sum of digits greater than 5 = " << sum;

    return 0;
}