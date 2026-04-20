// WAP to Find Square of Largest Digit
#include <iostream>
using namespace std;

int main() {
    int num, rem;
    int max = 0;

    cin >> num;

    while(num > 0) {
        rem = num % 10;

        if(rem > max)
            max = rem;

        num /= 10;
    }

    cout << max * max;

    return 0;
}

// WAP to Print Digits That Are Multiples of 3
#include <iostream>
using namespace std;

int main() {
    int num, rem;

    cin >> num;

    while(num > 0) {
        rem = num % 10;

        if(rem % 3 == 0)
            cout << rem << " ";

        num /= 10;
    }

    return 0;
}