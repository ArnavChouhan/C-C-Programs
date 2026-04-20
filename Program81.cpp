// WAP to Check Whether Reverse is Divisible by 3
#include <iostream>
using namespace std;

int main() {
    int num, rem, reverse = 0;

    cin >> num;

    while(num > 0) {
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num /= 10;
    }

    if(reverse % 3 == 0)
        cout << "Divisible";
    else
        cout << "Not Divisible";

    return 0;
}

// WAP to Count Digits Between 3 and 7
#include <iostream>
using namespace std;

int main() {
    int num, rem, count = 0;

    cin >> num;

    while(num > 0) {
        rem = num % 10;

        if(rem >= 3 && rem <= 7)
            count++;

        num /= 10;
    }

    cout << count;

    return 0;
}

