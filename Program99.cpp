// WAP to Print First n Multiples of 7
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=1;i<=n;i++)
        cout << 7*i << " ";

    return 0;
}


// WAP to Find Sum of Squares of First n Numbers
#include <iostream>
using namespace std;

int main() {
    int n, sum=0;
    cin >> n;

    for(int i=1;i<=n;i++)
        sum += i*i;

    cout << sum;

    return 0;
}

