// WAP to Find the Largest Even Digit in a Number
#include <iostream>
using namespace std;

int main() {
    int num, rem;
    int maxEven = -1;

    cout << "Enter a number: ";
    cin >> num;

    while(num != 0) {
        rem = num % 10;

        if(rem % 2 == 0 && rem > maxEven)
            maxEven = rem;

        num /= 10;
    }

    if(maxEven == -1)
        cout << "No even digit found";
    else
        cout << "Largest even digit = " << maxEven;

    return 0;
}  

// WAP to Find the Smallest Odd Digit in a Number
#include <iostream>
using namespace std;

int main() {
    int num, rem;
    int minOdd = 9;
    bool found = false;

    cout << "Enter a number: ";
    cin >> num;

    while(num != 0) {
        rem = num % 10;

        if(rem % 2 != 0 && rem < minOdd) {
            minOdd = rem;
            found = true;
        }

        num /= 10;
    }

    if(found)
        cout << "Smallest odd digit = " << minOdd;
    else
        cout << "No odd digit found";

    return 0;
}