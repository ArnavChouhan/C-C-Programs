// Search Element
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {

    Node* head=new Node();
    head->data=10;

    Node* second=new Node();
    second->data=20;

    head->next=second;
    second->next=NULL;

    int key=20;

    Node* temp=head;

    while(temp!=NULL) {

        if(temp->data==key) {
            cout<<"Found";
            return 0;
        }

        temp=temp->next;
    }

    cout<<"Not Found";

    return 0;
}
// Reverse Linked List
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
    third->next=NULL;

    Node* prev=NULL;
    Node* curr=head;
    Node* next=NULL;

    while(curr!=NULL) {

        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }

    head=prev;

    Node* temp=head;

    while(temp!=NULL) {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    return 0;
}

