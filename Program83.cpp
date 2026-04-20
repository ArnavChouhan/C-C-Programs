// WAP to Count Number of Digits Equal to First Digit
#include <iostream>
using namespace std;

int main() {
    int num, rem;

    cin >> num;

    int temp = num;

    while(temp >= 10)
        temp /= 10;

    int first = temp;

    int count = 0;

    while(num > 0) {
        rem = num % 10;

        if(rem == first)
            count++;

        num /= 10;
    }

    cout << count;

    return 0;
}

// WAP to Find Sum of Digits Divisible by 4
#include <iostream>
using namespace std;

int main() {
    int num, rem, sum = 0;

    cin >> num;

    while(num > 0) {
        rem = num % 10;

        if(rem % 4 == 0)
            sum += rem;

        num /= 10;
    }

    cout << sum;

    return 0;
}
