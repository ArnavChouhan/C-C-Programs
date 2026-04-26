// WAP to Print Numbers Divisible by 6 up to n
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=1;i<=n;i++)
        if(i%6==0)
            cout << i << " ";

    return 0;
}

// WAP to Count Multiples of 5 up to n
#include <iostream>
using namespace std;

int main() {
    int n, count=0;
    cin >> n;

    for(int i=1;i<=n;i++)
        if(i%5==0)
            count++;

    cout << count;

    return 0;
}

