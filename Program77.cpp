// WAP to Count Digits Divisible by 5
#include <iostream>
using namespace std;

int main() {
    int num, rem, count = 0;

    cin >> num;

    while(num > 0) {
        rem = num % 10;

        if(rem % 5 == 0)
            count++;

        num /= 10;
    }

    cout << count;
    return 0;
}

// WAP to Reverse Number and Find Sum With Original
#include <iostream>
using namespace std;

int main() {
    int num, rem, reverse = 0, original;

    cin >> num;

    original = num;

    while(num > 0) {
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num /= 10;
    }

    cout << "Sum = " << original + reverse;

    return 0;
}

