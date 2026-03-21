// WAP to Check Whether a Number is Disarium Number
#include <iostream>
using namespace std;

int main() {
    int num, temp, rem;
    int count = 0, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    temp = num;

    // Count digits
    while(temp != 0) {
        count++;
        temp /= 10;
    }

    temp = num;

    // Calculate sum
    while(temp != 0) {
        rem = temp % 10;

        int power = 1;
        for(int i = 1; i <= count; i++) {
            power *= rem;
        }

        sum += power;
        count--;
        temp /= 10;
    }

    if(sum == num)
        cout << "Disarium number";
    else
        cout << "Not a Disarium number";

    return 0;
}


// WAP to Check Whether a Number is Trimorphic Number
#include <iostream>
using namespace std;

int main() {
    int num, cube, temp;

    cout << "Enter a number: ";
    cin >> num;

    cube = num * num * num;
    temp = num;

    while(temp > 0) {
        if(temp % 10 != cube % 10) {
            cout << "Not a Trimorphic number";
            return 0;
        }
        temp /= 10;
        cube /= 10;
    }

    cout << "Trimorphic number";

    return 0;
}