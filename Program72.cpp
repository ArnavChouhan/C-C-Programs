// . WAP to Find Sum of Digits of a Number Until Single Digit (Digital Root)
#include <iostream>
using namespace std;

int main() {
    int num, sum;

    cout << "Enter number: ";
    cin >> num;

    while(num >= 10) {
        sum = 0;
        while(num > 0) {
            sum += num % 10;
            num /= 10;
        }
        num = sum;
    }

    cout << "Single digit sum = " << num;
    return 0;
}

// WAP to Count Number of Digits Divisible by 3
#include <iostream>
using namespace std;

int main() {
    int num, rem, count = 0;

    cin >> num;

    while(num > 0) {
        rem = num % 10;

        if(rem % 3 == 0)
            count++;

        num /= 10;
    }

    cout << "Count = " << count;
    return 0;
}

