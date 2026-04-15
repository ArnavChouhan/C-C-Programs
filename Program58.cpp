// WAP to Count Digits Greater Than 7 in a Number
#include <iostream>
using namespace std;

int main() {
    int num, rem, count = 0;

    cout << "Enter a number: ";
    cin >> num;

    while(num != 0) {
        rem = num % 10;

        if(rem > 7)
            count++;

        num /= 10;
    }

    cout << "Digits greater than 7 = " << count;

    return 0;
}

// WAP to Find the Sum of Last Three Digits of a Number
#include <iostream>
using namespace std;

int main() {
    int num, sum = 0, rem;

    cout << "Enter a number: ";
    cin >> num;

    for(int i = 0; i < 3; i++) {
        rem = num % 10;
        sum += rem;
        num /= 10;
    }

    cout << "Sum of last three digits = " << sum;

    return 0;
}