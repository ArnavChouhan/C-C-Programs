// Insert at End
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {

    Node* head=NULL;

    Node* newNode=new Node();
    newNode->data=5;
    newNode->next=NULL;

    head=newNode;

    Node* second=new Node();
    second->data=10;
    second->next=NULL;

    head->next=second;

    Node* temp=head;

    while(temp->next!=NULL) {
        temp=temp->next;
    }

    Node* third=new Node();
    third->data=15;
    third->next=NULL;

    temp->next=third;

    temp=head;

    while(temp!=NULL) {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    return 0;
}

// Delete First Node
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

    head=head->next;

    Node* temp=head;

    while(temp!=NULL) {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    return 0;
}