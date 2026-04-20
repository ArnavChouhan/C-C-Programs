// WAP to Print Digits Greater Than 4
#include <iostream>
using namespace std;

int main() {
    int num, rem;

    cin >> num;

    while(num > 0) {
        rem = num % 10;

        if(rem > 4)
            cout << rem << " ";

        num /= 10;
    }

    return 0;
}
// WAP to Find Sum of Alternate Digits
#include <iostream>
using namespace std;

int main() {
    int num, rem, pos = 1;
    int sum = 0;

    cin >> num;

    while(num > 0) {
        rem = num % 10;

        if(pos % 2 == 1)
            sum += rem;

        pos++;
        num /= 10;
    }

    cout << sum;
    return 0;
}

