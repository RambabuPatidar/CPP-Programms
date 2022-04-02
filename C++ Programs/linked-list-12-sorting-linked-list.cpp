#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
};



void push(node* &head ,int val){
    node* newNode = new node();
    newNode->data = val;
    newNode->next = head;
    head = newNode;
    return;
}

void printList(node* &head ){
    node* temp = head;
    while( temp!= NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
    return;
}

int main(){

    node* head =NULL;
    push(head , 6);
    push(head , 2);
    push(head , 7);
    push(head , 1);
    push(head , 7);
    push(head , 5);
    push(head, 7); 

    printList(head);

  
    

    

    return 0;
}