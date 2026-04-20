// WAP to Find Sum of Digits Except Last Digit
#include <iostream>
using namespace std;

int main() {
    int num, rem, sum = 0;

    cin >> num;

    num /= 10;

    while(num > 0) {
        rem = num % 10;
        sum += rem;
        num /= 10;
    }

    cout << sum;
    return 0;
}
// WAP to Count Even Digits Greater Than 4
#include <iostream>
using namespace std;

int main() {
    int num, rem, count = 0;

    cin >> num;

    while(num > 0) {
        rem = num % 10;

        if(rem % 2 == 0 && rem > 4)
            count++;

        num /= 10;
    }

    cout << count;
    return 0;
}