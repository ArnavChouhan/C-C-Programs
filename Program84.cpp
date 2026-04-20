// WAP to Count Digits Not Between 2 and 6
#include <iostream>
using namespace std;

int main() {
    int num, rem, count = 0;

    cin >> num;

    while(num > 0) {
        rem = num % 10;

        if(rem < 2 || rem > 6)
            count++;

        num /= 10;
    }

    cout << count;

    return 0;
}

// WAP to Check Whether Sum of Digits is Even
#include <iostream>
using namespace std;

int main() {
    int num, rem, sum = 0;

    cin >> num;

    while(num > 0) {
        rem = num % 10;
        sum += rem;
        num /= 10;
    }

    if(sum % 2 == 0)
        cout << "Even";
    else
        cout << "Odd";

    return 0;
}
// WAP to Find Sum of Digits Except First Digit
#include <iostream>
using namespace std;

int main() {
    int num, rem, sum = 0;

    cin >> num;

    while(num >= 10) {
        rem = num % 10;
        sum += rem;
        num /= 10;
    }

    cout << sum;

    return 0;
}
