// Find Minimum Element
#include <iostream>
using namespace std;

int main() {

    int arr[5]={10,25,5,40,15};

    int min=arr[0];

    for(int i=1;i<5;i++) {

        if(arr[i]<min) {
            min=arr[i];
        }
    }

    cout<<"Minimum element: "<<min;

    return 0;
}
// Reverse an Array
#include <iostream>
using namespace std;

int main() {

    int arr[5]={1,2,3,4,5};

    int start=0;
    int end=4;

    while(start<end) {

        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;

        start++;
        end--;
    }

    for(int i=0;i<5;i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}