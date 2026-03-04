// WAP to Find the Largest Digit in a Number  
#include <iostream>
using namespace std;

int main() {
    int num, rem;
    int max = 0;

    cout << "Enter a number: ";
    cin >> num;

    while(num != 0) {
        rem = num % 10;
        if(rem > max)
            max = rem;
        num /= 10;
    }

    cout << "Largest digit = " << max;

    return 0;
}   


// WAP to Find the Smallest Digit in a Number   

#include <iostream>
using namespace std;

int main() {
    int num, rem;
    int min = 9;

    cout << "Enter a number: ";
    cin >> num;

    while(num != 0) {
        rem = num % 10;
        if(rem < min)
            min = rem;
        num /= 10;
    }

    cout << "Smallest digit = " << min;

    return 0;
}  

