// WAP to Find Sum of Proper Divisors of a Number  
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    for(int i = 1; i < n; i++) {
        if(n % i == 0)
            sum += i;
    }

    cout << "Sum of proper divisors = " << sum;

    return 0;
}   
// WAP to Swap Two Numbers Without Using Third Variable  
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After swapping:\n";
    cout << "a = " << a << endl;
    cout << "b = " << b;

    return 0;
}