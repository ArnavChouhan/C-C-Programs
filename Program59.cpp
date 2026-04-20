// Create and Display Linked List
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {

    Node* head = NULL;
    Node* temp;

    for(int i=1;i<=5;i++) {

        Node* newNode = new Node();
        cout<<"Enter value: ";
        cin>>newNode->data;
        newNode->next = NULL;

        if(head==NULL) {
            head = newNode;
            temp = head;
        }
        else {
            temp->next = newNode;
            temp = temp->next;
        }
    }

    temp = head;

    cout<<"Linked List: ";

    while(temp!=NULL) {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    return 0;
}
// Insert at Beginning
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {

    Node* head=NULL;

    Node* newNode=new Node();
    newNode->data=10;

    newNode->next=head;
    head=newNode;

    cout<<"Inserted at beginning: "<<head->data;

    return 0;
}