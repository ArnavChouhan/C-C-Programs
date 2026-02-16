// //  Write a Program To Print n numbers 
#include  <iostream> 
using namespace std;

int main() {
    int n, num;
    cout << "Enter n: ";
    cin >> n;

    for(int i=1;i<=n;i++){
        cin >> num;
        cout << num << " ";
    }
    return 0;
}
 
//  Write a Program To Print n numbers in reverse
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int arr[100];
    for(int i=0;i<n;i++)
        cin >> arr[i];

    for(int i=n-1;i>=0;i--)
        cout << arr[i] << " ";

    return 0;
}
