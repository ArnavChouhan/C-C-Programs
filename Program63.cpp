// Detect Cycle
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {

    Node* head=new Node();
    head->data=1;

    Node* second=new Node();
    second->data=2;

    Node* third=new Node();
    third->data=3;

    head->next=second;
    second->next=third;
    third->next=head; // cycle created

    Node* slow=head;
    Node* fast=head;

    while(fast!=NULL && fast->next!=NULL) {

        slow=slow->next;
        fast=fast->next->next;

        if(slow==fast) {
            cout<<"Cycle Detected";
            return 0;
        }
    }

    cout<<"No Cycle";

    return 0;
}

// Find Maximum Element in Array
#include <iostream>
using namespace std;

int main() {

    int arr[5]={10,25,5,40,15};

    int max=arr[0];

    for(int i=1;i<5;i++) {

        if(arr[i]>max) {
            max=arr[i];
        }
    }

    cout<<"Maximum element: "<<max;

    return 0;
}