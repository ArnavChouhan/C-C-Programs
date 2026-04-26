// WAP to Find Sum of First n Numbers
#include <iostream>
using namespace std;

int main() {
    int n,sum=0;
    cin >> n;

    for(int i=1;i<=n;i++)
        sum+=i;

    cout << sum;
    return 0;
}


// WAP to Find Product of First n Numbers
#include <iostream>
using namespace std;

int main() {
    int n;
    long long p=1;

    cin >> n;

    for(int i=1;i<=n;i++)
        p*=i;

    cout << p;
    return 0;
}

