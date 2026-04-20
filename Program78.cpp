// WAP to Count Digits Not Equal to 0
#include <iostream>
using namespace std;

int main() {
    int num, rem, count = 0;

    cin >> num;

    while(num > 0) {
        rem = num % 10;

        if(rem != 0)
            count++;

        num /= 10;
    }

    cout << count;
    return 0;
}
// WAP to Find Square of Each Digit
#include <iostream>
using namespace std;

int main() {
    int num, rem;

    cin >> num;

    while(num > 0) {
        rem = num % 10;
        cout << rem * rem << " ";
        num /= 10;
    }

    return 0;
}
