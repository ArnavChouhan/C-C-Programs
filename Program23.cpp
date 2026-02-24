// : WAP to Check Whether a Number is Armstrong Number   
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
        sum += rem * rem * rem;
        num /= 10;
    }

    if(sum == original)
        cout << "Armstrong number";
    else
        cout << "Not an Armstrong number";

    return 0;
}   

// WAP to Print All Factors of a Number  

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Factors are: ";
    for(int i = 1; i <= n; i++) {
        if(n % i == 0)
            cout << i << " ";
    }

    return 0;
}  
