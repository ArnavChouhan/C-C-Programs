// WAP to Find the Average of Digits of a Number  
#include <iostream>
using namespace std;

int main() {
    int num, rem;
    int sum = 0, count = 0;

    cout << "Enter a number: ";
    cin >> num;

    while(num != 0) {
        rem = num % 10;
        sum += rem;
        count++;
        num /= 10;
    }

    float avg = (float)sum / count;

    cout << "Average of digits = " << avg;

    return 0;
} 


// WAP to Print Digits of a Number One by One  

#include <iostream>
using namespace std;

int main() {
    int num, rem;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Digits are: ";

    while(num != 0) {
        rem = num % 10;
        cout << rem << " ";
        num /= 10;
    }

    return 0;
} 