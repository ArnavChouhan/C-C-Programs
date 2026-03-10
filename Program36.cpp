// WAP to Count Zeros in a Number  

#include <iostream>
using namespace std;

int main() {
    int num, rem;
    int count = 0;

    cout << "Enter a number: ";
    cin >> num;

    while(num != 0) {
        rem = num % 10;

        if(rem == 0)
            count++;

        num /= 10;
    }

    cout << "Number of zeros = " << count;

    return 0;
}

// WAP to Find the First Digit of a Number  
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    while(num >= 10) {
        num = num / 10;
    }

    cout << "First digit = " << num;

    return 0;
}