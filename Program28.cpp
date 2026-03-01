// WAP to Check Whether a Number is Harshad (Niven) Number  
#include <iostream>
using namespace std;

int main() {
    int num, temp, rem, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    temp = num;

    while(temp != 0) {
        rem = temp % 10;
        sum += rem;
        temp /= 10;
    }

    if(num % sum == 0)
        cout << "Harshad Number";
    else
        cout << "Not a Harshad Number";

    return 0;
}  


// WAP to Find the Sum of Even Digits of a Number  
#include <iostream>
using namespace std;

int main() {
    int num, rem;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    while(num != 0) {
        rem = num % 10;
        if(rem % 2 == 0)
            sum += rem;
        num /= 10;
    }

    cout << "Sum of even digits = " << sum;

    return 0;
}  