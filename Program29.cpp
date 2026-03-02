// WAP to Find the Product of Digits of a Number   
#include <iostream>
using namespace std;

int main() {
    int num, rem;
    int product = 1;

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


// WAP to Check Whether a Number is Duck Number   
#include <iostream>
using namespace std;

int main() {
    int num, rem;
    bool hasZero = false;

    cout << "Enter a number: ";
    cin >> num;

    if(num == 0) {
        cout << "Not a Duck Number";
        return 0;
    }

    while(num != 0) {
        rem = num % 10;
        if(rem == 0)
            hasZero = true;
        num /= 10;
    }

    if(hasZero)
        cout << "Duck Number";
    else
        cout << "Not a Duck Number";

    return 0;
}   


