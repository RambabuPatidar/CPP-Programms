#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next ;
    node* prev;

};

int lengthOfLinkedList(node*&head){
    node* temp = head;
    int count = 0;
    while(temp !=NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

void push(node* &head , int val ){
    node* newNode = new node();
    newNode->data = val ;
    newNode->next = head;
    newNode->prev = NULL;
    if(head!=NULL){
        head->prev = newNode;
    }
    head = newNode;
    return;
}

void printList(node* &head ){
    node* temp = head ;
    cout<<"NULL<->";
    while(temp!=NULL){
        cout<<temp->data<<" <-> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
    return;
}
int main(){

    node* head =NULL;
    int arr[8]={8,7,6,5,4,3,2,1};
    
    for(int i=0;i<8;i++){
        push(head, arr[i]);
    }
    printList(head);

   cout<< lengthOfLinkedList(head)<<endl;
    
    return 0;
}