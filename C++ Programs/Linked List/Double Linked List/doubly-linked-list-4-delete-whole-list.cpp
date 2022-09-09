#include<iostream>
using namespace std;
class node{
    public:
    int data; 
    node* next ;
    node* prev;

};

void deleteWhole(node* &head){
    node* temp = head;
    node* nextNode = NULL;
    while(temp!= NULL){
        nextNode = temp->next;
        delete temp;
        temp = nextNode;
        
    }
        head = temp;
}

void push( node* &head , int val){
    node* newNode = new node();
    newNode->data = val;
    newNode->next = head;
    newNode->prev = NULL;
    if( head!=NULL){
        head->prev = newNode;
    }
    head = newNode;
    return ;
}

void printList( node*&head){
    node* temp = head;
    cout<<"NULL<->";
    while(temp!=NULL){
        cout<<temp->data<<" <-> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
    return ;

}
int main(){

    node* head = NULL;
    push(head , 6);
    push(head , 5);
    push(head , 4);
    push(head , 3);
    push(head , 2);
    push(head , 1);
    printList(head);

    deleteWhole(head);
    printList(head);

    
    return 0;
}