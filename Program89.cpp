// WAP to Print First n Even Numbers
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=1;i<=n;i++)
        cout << 2*i << " ";

    return 0;
}

// WAP to Print First n Odd Numbers
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=1;i<=n;i++)
        cout << 2*i-1 << " ";

    return 0;
}

