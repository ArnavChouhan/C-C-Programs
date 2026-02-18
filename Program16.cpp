//  Write a Program Sum of n numbers
#include <iostream>
using namespace std;

int main() {
    int n, num, sum=0;
    cin >> n;

    for(int i=1;i<=n;i++){
        cin >> num;
        sum += num;
    }

    cout << "Sum = " << sum;
    return 0;
}
 
// Write a Program Largest among n numbers 
#include <iostream>
using namespace std;

int main() {
    int n, num, mx;
    cin >> n;

    cin >> num;
    mx = num;

    for(int i=2;i<=n;i++){
        cin >> num;
        if(num > mx)
            mx = num;
    }

    cout << "Largest = " << mx;
    return 0;
}
