#include<iostream>
using namespace std;

class Node{
    public:  
        int data;
        Node* next;

        Node(int data){
            this->data=data;
            next=NULL;
        }
};

class stack{
    Node* head;
    int size; // numberof elements present in the stack
    public:

    stack(){
         head=NULL;
         size=0;
    }
    int getsize(){
        return size;
    }
    bool isEmpty(){
        if(size==0){
            return 0;
        }
        else{
            return 1;
        }
    }
    void push(int element){
         Node* newNode = new Node (element);
         newNode->next = head;
         head = newNode;
         size++;
    }
    int pop(){
        if(size==0){
            return 0;
        }
        int ans = head->data;
        Node* temp = head;
        head = head->next;
        delete(temp);
        size--;
        return ans;
    }
    int top(){
        if(size==0){
            return 0;
        }
        return head->data;
    }

};


int main(){
    // Stack using linked list'
    stack s;
    s.push(100);
    s.push(101);
    s.push(102);
    s.push(103);
    s.push(104);
    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.top()<<endl;

    cout<<s.getsize()<<endl;
    cout<<s.isEmpty()<<endl;

    return 0;
}
