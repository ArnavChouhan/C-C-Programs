// WAP to Check Whether a Number is Spy Number
#include <iostream>
using namespace std;

int main() {
    int num, rem;
    int sum = 0, product = 1;

    cout << "Enter a number: ";
    cin >> num;

    while(num != 0) {
        rem = num % 10;
        sum += rem;
        product *= rem;
        num /= 10;
    }

    if(sum == product)
        cout << "Spy number";
    else
        cout << "Not a Spy number";

    return 0;
}

// WAP to Find the Difference Between Product and Sum of Digits
#include <iostream>
using namespace std;

int main() {
    int num, rem;
    int sum = 0, product = 1;

    cout << "Enter a number: ";
    cin >> num;

    while(num != 0) {
        rem = num % 10;
        sum += rem;
        product *= rem;
        num /= 10;
    }

    cout << "Difference = " << product - sum;

    return 0;
}