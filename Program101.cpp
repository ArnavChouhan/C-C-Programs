// WAP to Print Numbers Between Two Given Numbers
#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;

    for(int i=a;i<=b;i++)
        cout << i << " ";

    return 0;
}



// WAP to Find Sum of Numbers Between a and b
#include <iostream>
using namespace std;

int main() {
    int a,b,sum=0;
    cin >> a >> b;

    for(int i=a;i<=b;i++)
        sum += i;

    cout << sum;

    return 0;
}
