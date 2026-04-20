// WAP to Find Product of Digits Greater Than 2
#include <iostream>
using namespace std;

int main() {
    int num, rem;
    int product = 1;

    cin >> num;

    while(num > 0) {
        rem = num % 10;

        if(rem > 2)
            product *= rem;

        num /= 10;
    }

    cout << product;

    return 0;
}

// WAP to Find Difference Between Largest and Smallest Digit
#include <iostream>
using namespace std;

int main() {
    int num, rem;
    int max = 0, min = 9;

    cin >> num;

    while(num > 0) {
        rem = num % 10;

        if(rem > max)
            max = rem;

        if(rem < min)
            min = rem;

        num /= 10;
    }

    cout << max - min;

    return 0;
}