// WAP to Find the Sum of Digits of a Number
#include <iostream>
using namespace std;

int main() {
    int num, rem, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    while(num != 0) {
        rem = num % 10;
        sum += rem;
        num /= 10;
    }

    cout << "Sum of digits = " << sum;

    return 0;
}


// WAP to Find the Product of Digits of a Number
#include <iostream>
using namespace std;

int main() {
    int num, rem, product = 1;

    cout << "Enter a number: ";
    cin >> num;

    while(num != 0) {
        rem = num % 10;
        product *= rem;
        num /= 10;
    }

    cout << "Product of digits = " << product;

    return 0;
}