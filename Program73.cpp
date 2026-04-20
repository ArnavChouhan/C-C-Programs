// WAP to Check Whether Number Ends With Even Digit
#include <iostream>
using namespace std;

int main() {
    int num;

    cin >> num;

    if((num % 10) % 2 == 0)
        cout << "Ends with even digit";
    else
        cout << "Ends with odd digit";

    return 0;
}
// WAP to Find Sum of Digits Divisible by 2
#include <iostream>
using namespace std;

int main() {
    int num, rem, sum = 0;

    cin >> num;

    while(num > 0) {
        rem = num % 10;

        if(rem % 2 == 0)
            sum += rem;

        num /= 10;
    }

    cout << "Sum = " << sum;
    return 0;
}
