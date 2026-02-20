// Write a Program factorial of number 
#include <iostream>
using namespace std;

int main() {
    int n;
    long long fact=1;
    cin >> n;

    for(int i=1;i<=n;i++)
        fact*=i;

    cout<<"Factorial="<<fact;
    return 0;
}
// WAP to Find Sum of First n Even Numbers  
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter n: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        sum += 2*i;
    }

    cout << "Sum = " << sum;
    return 0;
}