// Write a Program Count even and odd numbers 
#include <iostream>
using namespace std;

int main() {
    int n, num;
    int even=0, odd=0;

    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> num;
        if(num%2==0) even++;
        else odd++;
    }

    cout << "Even=" << even << endl;
    cout << "Odd=" << odd;
    return 0;
}
 
// Write a program Average of n numbers 
#include <iostream>
using namespace std;

int main() {
    int n, num;
    float sum=0;

    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> num;
        sum += num;
    }

    cout << "Average = " << sum/n;
    return 0;
}
