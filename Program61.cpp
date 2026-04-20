// Delete Last Node
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

    Node* third=new Node();
    third->data=30;

    head->next=second;
    second->next=third;
    third->next=NULL;

    Node* temp=head;

    while(temp->next->next!=NULL) {
        temp=temp->next;
    }

    temp->next=NULL;

    temp=head;

    while(temp!=NULL) {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    return 0;
}


// Count Nodes
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

    int count=0;

    Node* temp=head;

    while(temp!=NULL) {
        count++;
        temp=temp->next;
    }

    cout<<"Total nodes: "<<count;

    return 0;
}