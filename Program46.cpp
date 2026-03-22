// WAP to Find the Sum of Digits at Even Positions
#include <iostream>
using namespace std;

int main() {
    int num, rem;
    int pos = 1;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    while(num != 0) {
        rem = num % 10;

        if(pos % 2 == 0)
            sum += rem;

        num /= 10;
        pos++;
    }

    cout << "Sum of digits at even positions = " << sum;

    return 0;
}

// WAP to Find the Sum of Digits at Odd Positions
#include <iostream>
using namespace std;

int main() {
    int num, rem;
    int pos = 1;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    while(num != 0) {
        rem = num % 10;

        if(pos % 2 != 0)
            sum += rem;

        num /= 10;
        pos++;
    }

    cout << "Sum of digits at odd positions = " << sum;

    return 0;
}