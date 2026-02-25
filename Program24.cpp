// WAP to Print the Reverse Table of a Number  
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    for(int i = 10; i >= 1; i--) {
        cout << num << " x " << i << " = " << num*i << endl;
    }

    return 0;
}  
// WAP to Check Whether a Number is Strong Number  
#include <iostream>
using namespace std;

int main() {
    int num, original, rem;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    original = num;

    while(num != 0) {
        rem = num % 10;

        int fact = 1;
        for(int i = 1; i <= rem; i++)
            fact *= i;

        sum += fact;
        num /= 10;
    }

    if(sum == original)
        cout << "Strong number";
    else
        cout << "Not strong number";

    return 0;
}  