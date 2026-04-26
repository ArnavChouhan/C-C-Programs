// WAP to Print Multiples of 3 up to n
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=3;i<=n;i+=3)
        cout << i << " ";

    return 0;
}


// WAP to Count Numbers Divisible by 2 up to n
#include <iostream>
using namespace std;

int main() {
    int n,count=0;
    cin >> n;

    for(int i=1;i<=n;i++)
        if(i%2==0)
            count++;

    cout << count;
    return 0;
}
