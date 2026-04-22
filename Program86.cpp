// WAP to Find the Sum of Digits at Even Positions (from right side)
#include <iostream>
using namespace std;

int main() {
    int num, rem;
    int pos = 1, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    while(num > 0) {
        rem = num % 10;

        if(pos % 2 == 0)
            sum += rem;

        pos++;
        num /= 10;
    }

    cout << "Sum of digits at even positions = " << sum;

    return 0;
}

// WAP to Find the Number of Digits That Are Perfect Squares
#include <iostream>
using namespace std;

int main() {
    int num, rem, count = 0;

    cout << "Enter a number: ";
    cin >> num;

    while(num > 0) {
        rem = num % 10;

        if(rem == 0 || rem == 1 || rem == 4 || rem == 9)
            count++;

        num /= 10;
    }

    cout << "Perfect square digits = " << count;

    return 0;
}