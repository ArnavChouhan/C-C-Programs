// WAP to Print Numbers Divisible by 7 up to n  
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=1; i<=n; i++) {
        if(i % 7 == 0)
            cout << i << " ";
    }

    return 0;
}  

// WAP to Find LCM of Two Numbers  
#include <iostream>
using namespace std;

int main() {
    int a, b, max;

    cin >> a >> b;
    max = (a > b) ? a : b;

    while(true) {
        if(max % a == 0 && max % b == 0) {
            cout << "LCM = " << max;
            break;
        }
        max++;
    }

    return 0;
}   