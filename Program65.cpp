// Sum of Array Elements
#include <iostream>
using namespace std;

int main() {

    int arr[5]={1,2,3,4,5};

    int sum=0;

    for(int i=0;i<5;i++) {

        sum=sum+arr[i];
    }

    cout<<"Sum = "<<sum;

    return 0;
}
// Search Element (Linear Search)
#include <iostream>
using namespace std;

int main() {

    int arr[5]={10,20,30,40,50};

    int key=30;
    int found=0;

    for(int i=0;i<5;i++) {

        if(arr[i]==key) {

            cout<<"Element Found at index "<<i;
            found=1;
            break;
        }
    }

    if(found==0) {
        cout<<"Element Not Found";
    }

    return 0;
}