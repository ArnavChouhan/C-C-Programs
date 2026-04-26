// WAP to Find Sum of Odd Numbers up to n
#include <iostream>
using namespace std;

int main() {
    int n,sum=0;

    cin >> n;

    for(int i=1;i<=n;i++)
        if(i%2!=0)
            sum+=i;

    cout << sum;
    return 0;
}


// WAP to Check Whether Number is Multiple of 10
#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;

    if(n%10==0)
        cout << "Multiple of 10";
    else
        cout << "Not Multiple";

    return 0;
}