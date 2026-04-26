// WAP to Print Reverse Counting from 10 to 1
#include <iostream>
using namespace std;

int main() {

    for(int i=10;i>=1;i--)
        cout << i << " ";

    return 0;
}


// WAP to Find Sum of Even Numbers up to n
#include <iostream>
using namespace std;

int main() {
    int n,sum=0;

    cin >> n;

    for(int i=1;i<=n;i++)
        if(i%2==0)
            sum+=i;

    cout << sum;
    return 0;
}
