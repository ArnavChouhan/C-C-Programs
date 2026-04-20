// Find Duplicate 
#include <iostream>
using namespace std;

int main() {

    int arr[6]={1,2,3,2,4,5};

    for(int i=0;i<6;i++) {

        for(int j=i+1;j<6;j++) {

            if(arr[i]==arr[j]) {

                cout<<"Duplicate: "<<arr[i];
            }
        }
    }

    return 0;
}

// Star Square
#include <iostream>
using namespace std;

int main() {

    for(int i=1;i<=4;i++) {

        for(int j=1;j<=4;j++) {

            cout<<"* ";
        }

        cout<<endl;
    }

    return 0;
}