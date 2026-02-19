// Write a Program Table of a number  
#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    for(int i=1;i<=10;i++)
        cout << num << " x " << i << " = " << num*i << endl;

    return 0;
}
 
// Write a Program Count positive, negative, zero  
#include <iostream>
using namespace std;

int main() {
    int n, num;
    int pos=0, neg=0, zero=0;

    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> num;
        if(num>0) pos++;
        else if(num<0) neg++;
        else zero++;
    }

    cout<<"Positive="<<pos<<endl;
    cout<<"Negative="<<neg<<endl;
    cout<<"Zero="<<zero;
    return 0;
}
