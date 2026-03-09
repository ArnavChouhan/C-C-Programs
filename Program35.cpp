// WAP to Find the Difference Between Sum of Even Digits and Sum of Odd Digits  
#include <iostream>
using namespace std;

int main() {
    int num, rem;
    int evenSum = 0, oddSum = 0;

    cout << "Enter a number: ";
    cin >> num;

    while(num != 0) {
        rem = num % 10;

        if(rem % 2 == 0)
            evenSum += rem;
        else
            oddSum += rem;

        num /= 10;
    }

    cout << "Difference = " << evenSum - oddSum;

    return 0;
} 


// WAP to Print Each Digit of a Number on a New Line 
#include <iostream>
using namespace std;

int main() {
    int num, rem;

    cout << "Enter a number: ";
    cin >> num;

    while(num != 0) {
        rem = num % 10;
        cout << rem << endl;
        num /= 10;
    }

    return 0;
}  