#include<iostream>
using namespace std;
class node{
    public:
    int data ;
    node* next ;
    node* prev;
};

void midRecursively(node* &head , int size, int count){
    node* temp  = head;
    if( temp== NULL ){
        cout<<"element not found"<<endl;
        return;
    }
    if(count == size / 2){
        cout<<temp->data<<endl;
        return;
    }
    else{
        midRecursively(temp->next , size ,++count);
    }
}

void midElement(node* &head ,int size){
    node* temp = head;
    int count = 1;
    while( temp != NULL && count!= (size/2)+1){
        temp = temp->next;
        count++;
    }
    cout<<temp->data<<endl;
    return;
}
void push(node* &head , int val){
    node* newNode = new node();
    newNode->data = val;
    newNode->prev = NULL;
    newNode->next = head;
    if( head != NULL){
       head->prev = newNode;

    }
    head = newNode;
    return;
}
void printList(node* &head){
    node* temp  = head ;
    cout<<"NULL<->";
    while(temp!= NULL){
        cout<<temp->data<<" <-> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
    return;
}
int main(){
    node* head = NULL;
    // push(head , 7);
    push(head , 6);
    push(head , 5);
    push(head , 4);
    push(head , 3);
    push(head , 2);
    push(head , 1);
    
    printList(head);

    midElement(head, 6);

    midRecursively(head, 6,0);
    
    return 0;
}