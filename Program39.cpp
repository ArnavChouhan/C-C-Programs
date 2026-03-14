// WAP to Find the Middle Digit of a 3-Digit Number
#include <iostream>
using namespace std;

int main() {
    int num, middle;

    cout << "Enter a 3-digit number: ";
    cin >> num;

    middle = (num / 10) % 10;

    cout << "Middle digit = " << middle;

    return 0;
} 
// WAP to Find the Sum of First and Middle Digit of a 3-Digit Number
#include <iostream>
using namespace std;

int main() {
    int num, first, middle;

    cout << "Enter a 3-digit number: ";
    cin >> num;

    first = num / 100;
    middle = (num / 10) % 10;

    cout << "Sum = " << first + middle;

    return 0;
}