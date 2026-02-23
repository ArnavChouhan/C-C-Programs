
// WAP to Print Sum of First n Odd Numbers  
 #include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter n: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        sum += (2*i - 1);   // odd numbers
    }

    cout << "Sum = " << sum;
    return 0;
}

// WAP to Find GCD (HCF) of Two Numbers   
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    int gcd;
    for(int i = 1; i <= a && i <= b; i++) {
        if(a % i == 0 && b % i == 0)
            gcd = i;
    }

    cout << "GCD = " << gcd;
    return 0;
} 

