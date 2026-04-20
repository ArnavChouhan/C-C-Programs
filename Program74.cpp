// WAP to Find Difference Between First and Last Digit
#include <iostream>
using namespace std;

int main() {
    int num, first, last;

    cin >> num;

    last = num % 10;

    while(num >= 10)
        num /= 10;

    first = num;

    cout << "Difference = " << first - last;

    return 0;
}


// WAP to Count Number of Digits Less Than 3
#include <iostream>
using namespace std;

int main() {
    int num, rem, count = 0;

    cin >> num;

    while(num > 0) {
        rem = num % 10;

        if(rem < 3)
            count++;

        num /= 10;
    }

    cout << count;
    return 0;
}
