// WAP to Print ASCII Values of Characters A to Z 
#include <iostream>
using namespace std;

int main() {

    for(char ch='A'; ch<='Z'; ch++) {
        cout << ch << " = " << int(ch) << endl;
    }

    return 0;
} 
// WAP to Check Whether a Number is Perfect Number  
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter number: ";
    cin >> n;

    for(int i=1; i<n; i++) {
        if(n % i == 0)
            sum += i;
    }

    if(sum == n)
        cout << "Perfect number";
    else
        cout << "Not perfect";

    return 0;
}  