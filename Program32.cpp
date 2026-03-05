// WAP to Find the Sum of Odd Digits of a Number  

#include <iostream>
using namespace std;

int main() {
    int num, rem;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    while(num != 0) {
        rem = num % 10;

        if(rem % 2 != 0)
            sum += rem;

        num /= 10;
    }

    cout << "Sum of odd digits = " << sum;

    return 0;
}  


// : WAP to Check Whether a Number Contains Digit 5 or Not  
#include <iostream>
using namespace std;

int main() {
    int num, rem;
    bool found = false;

    cout << "Enter a number: ";
    cin >> num;

    while(num != 0) {
        rem = num % 10;

        if(rem == 5) {
            found = true;
            break;
        }

        num /= 10;
    }

    if(found)
        cout << "Number contains digit 5";
    else
        cout << "Number does not contain digit 5";

    return 0;
}