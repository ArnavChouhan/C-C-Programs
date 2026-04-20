// WAP to Find Number of Digits in Reverse Order
#include <iostream>
using namespace std;

int main() {
    int num, rem;

    cin >> num;

    while(num > 0) {
        rem = num % 10;
        cout << rem << endl;
        num /= 10;
    }

    return 0;
}
// WAP to Find Sum of Digits Which Are Greater Than Average Digit
#include <iostream>
using namespace std;

int main() {
    int num, rem;
    int sum = 0, count = 0;

    cin >> num;

    int temp = num;

    while(temp > 0) {
        sum += temp % 10;
        count++;
        temp /= 10;
    }

    float avg = (float)sum / count;

    int total = 0;

    while(num > 0) {
        rem = num % 10;

        if(rem > avg)
            total += rem;

        num /= 10;
    }

    cout << total;

    return 0;
}
