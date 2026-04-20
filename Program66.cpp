// Second Largest Element
#include <iostream>
using namespace std;

int main() {

    int arr[5]={10,50,30,40,20};

    int largest=arr[0];
    int second=arr[0];

    for(int i=1;i<5;i++) {

        if(arr[i]>largest) {

            second=largest;
            largest=arr[i];
        }

        else if(arr[i]>second && arr[i]!=largest) {

            second=arr[i];
        }
    }

    cout<<"Second Largest: "<<second;

    return 0;
}
// Count Even and Odd Numbers
#include <iostream>
using namespace std;

int main() {

    int arr[6]={1,2,3,4,5,6};

    int even=0;
    int odd=0;

    for(int i=0;i<6;i++) {

        if(arr[i]%2==0) {
            even++;
        }

        else {
            odd++;
        }
    }

    cout<<"Even = "<<even<<endl;
    cout<<"Odd = "<<odd;

    return 0;
}
