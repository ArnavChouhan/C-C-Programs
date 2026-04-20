// WAP to Replace Digit 0 With 1
#include <iostream>
using namespace std;

int main() {
    int num, rem, newNum = 0, place = 1;

    cin >> num;

    while(num > 0) {
        rem = num % 10;

        if(rem == 0)
            rem = 1;

        newNum += rem * place;

        place *= 10;
        num /= 10;
    }

    cout << newNum;
    return 0;
}

// WAP to Count Number of Digits Equal to Last Digit
#include <iostream>
using namespace std;

int main() {
    int num, rem, count = 0;

    cin >> num;

    int last = num % 10;

    while(num > 0) {
        rem = num % 10;

        if(rem == last)
            count++;

        num /= 10;
    }

    cout << count;
    return 0;
}