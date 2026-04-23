// WAP to Check Whether a Number Contains Only Even Digit
#include <iostream>
using namespace std;

int main() {
    int num, rem;
    bool onlyEven = true;

    cout << "Enter a number: ";
    cin >> num;

    while(num > 0) {
        rem = num % 10;

        if(rem % 2 != 0) {
            onlyEven = false;
            break;
        }

        num /= 10;
    }

    if(onlyEven)
        cout << "Number contains only even digits";
    else
        cout << "Number contains odd digits also";

    return 0;
}


// WAP to Find the Sum of Digits That Are Multiples of 3
#include <iostream>
using namespace std;

int main() {
    int num, rem, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    while(num > 0) {
        rem = num % 10;

        if(rem % 3 == 0)
            sum += rem;

        num /= 10;
    }

    cout << "Sum of digits multiple of 3 = " << sum;

    return 0;
}

