#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node*next;  

    //constructure
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
     
};

void InsertAtHead(Node* &head,int d){
    //new node create
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void InsertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){

    //created a new node
    Node* node1 = new Node(10);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;

    cout<<"\n"<<"\n"<<"\n";

    // head pointed to node1
    Node* head = node1;
    Node* tail = node1;
    print(head);
    cout<<endl;
    InsertAtHead(head,12);
    print(head);
    cout<<endl;
    InsertAtHead(head,15 );
    print(head);
    cout<<endl;\

    cout<<"\n"<<"\n"<<"\n";


    return 0;
}