// WAP to Count Even Digits in a Number  
#include <iostream>
using namespace std;

int main() {
    int num, rem;
    int count = 0;

    cout << "Enter a number: ";
    cin >> num;

    while(num != 0) {
        rem = num % 10;

        if(rem % 2 == 0)
            count++;

        num /= 10;
    }

    cout << "Number of even digits = " << count;

    return 0;
}  

// WAP to Count Odd Digits in a Number  
#include <iostream>
using namespace std;

int main() {
    int num, rem;
    int count = 0;

    cout << "Enter a number: ";
    cin >> num;

    while(num != 0) {
        rem = num % 10;

        if(rem % 2 != 0)
            count++;

        num /= 10;
    }

    cout << "Number of odd digits = " << count;

    return 0;
}  
