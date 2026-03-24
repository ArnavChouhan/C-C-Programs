// WAP to Find the Reverse of Number and Check if it is Greater Than Original
#include <iostream>
using namespace std;

int main() {
    int num, rem, reverse = 0;
    int original;

    cout << "Enter a number: ";
    cin >> num;

    original = num;

    while(num != 0) {
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num /= 10;
    }

    cout << "Reverse = " << reverse << endl;

    if(reverse > original)
        cout << "Reverse is greater than original";
    else
        cout << "Reverse is not greater than original";

    return 0;
}

// WAP to Count Digits Less Than 5 in a Number
#include <iostream>
using namespace std;

int main() {
    int num, rem;
    int count = 0;

    cout << "Enter a number: ";
    cin >> num;

    while(num != 0) {
        rem = num % 10;

        if(rem < 5)
            count++;

        num /= 10;
    }

    cout << "Digits less than 5 = " << count;

    return 0;
}