// WAP to Count Frequency of a Digit in a Number  
#include <iostream>
using namespace std;

int main() {
    int num, digit, rem, count = 0;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Enter digit to search: ";
    cin >> digit;

    while(num != 0) {
        rem = num % 10;
        if(rem == digit)
            count++;
        num /= 10;
    }

    cout << "Frequency = " << count;

    return 0;
}  
// WAP to Check Whether a Number is Automorphic Number   
#include <iostream>
using namespace std;

int main() {
    int num, square, temp;

    cout << "Enter a number: ";
    cin >> num;

    square = num * num;
    temp = num;

    while(temp > 0) {
        if(temp % 10 != square % 10) {
            cout << "Not Automorphic";
            return 0;
        }
        temp /= 10;
        square /= 10;
    }

    cout << "Automorphic number";

    return 0;
}  
