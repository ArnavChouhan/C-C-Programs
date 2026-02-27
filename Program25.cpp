// WAP to Check Whether a Number is Neon Number  
#include <iostream>
using namespace std;

int main() {
    int num, square, sum = 0, rem;

    cout << "Enter a number: ";
    cin >> num;

    square = num * num;

    while(square != 0) {
        rem = square % 10;
        sum += rem;
        square /= 10;
    }

    if(sum == num)
        cout << "Neon number";
    else
        cout << "Not a Neon number";

    return 0;
}  
// WAP to Print Numbers Divisible by Both 3 and 5 up to n  
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter n: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        if(i % 3 == 0 && i % 5 == 0)
            cout << i << " ";
    }

    return 0;
}  