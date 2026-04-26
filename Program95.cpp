// WAP to Check Whether Number is Divisible by 5
#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;

    if(n%5==0)
        cout << "Divisible";
    else
        cout << "Not Divisible";

    return 0;
}


// WAP to Print Numbers Divisible by 4 up to n
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=1;i<=n;i++)
        if(i%4==0)
            cout << i << " ";

    return 0;
}

