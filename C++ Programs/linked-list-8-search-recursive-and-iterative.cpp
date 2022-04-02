#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

};

void searchRecursively(node* &head , int key){
    node* temp = head;
    if(temp== NULL ){
        cout<<"key not present"<<endl;
        return;
    }
    if(temp->data == key){
        cout<<"present"<<endl;
        return;
    }
   return searchRecursively(temp->next ,key);
}

void searchInLinkedList(node* &head, int key){
    node* temp = head;
    while( temp!=NULL){
        if ( temp->data == key){
            cout<<"present"<<endl;
            return;
        }
        temp= temp->next;    
    }
    cout<<"key not present in the linked list"<<endl;
    return;
    
}
void push(node* &head , int val){
    node* newNode = new node();
    newNode->data = val;
    newNode->next = head;
    head = newNode;
}

void printList( node* &head){
    node* temp = head;
    while( temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;

    }
    cout<<"NULL"<<endl;
    return;
}

int main(){
    node* head = NULL;
    push(head, 6);
    push(head, 5);
    push(head, 4);
    push(head, 3);
    push(head, 2);
    push(head, 1);

    printList(head);

    searchInLinkedList(head ,6);
   

    searchRecursively(head ,2);
    

    
    return 0;
}