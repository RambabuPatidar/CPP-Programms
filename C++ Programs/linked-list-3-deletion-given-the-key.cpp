#include<iostream>
using namespace std;

class node{
   public:
   int data;
   node* next;

};

void searching(node * ref_node , int key){
    node* temp = ref_node;
    while( temp != NULL){
        if( temp->data == key){
            cout<<"present"<<endl;
            return;
        }
        temp= temp->next;
    }
    cout<<"not present"<<endl;
    return;
}

void deleteElement(node** head_ref, int key){
    node* preNode= NULL;
    node* temp = *head_ref;
    if( temp!= NULL && temp->data == key){
        *head_ref = temp->next; 
        delete temp;
        return;
    }
    else{
        while( temp!=0 && (temp->data != key)){
            preNode = temp;
            temp= temp->next;
        }
    
        if( temp==NULL){
            cout<<"key not present"<<endl;
            return;
        }
        preNode->next = temp->next;
        delete temp;
        return;
    }
}

void printList(node* head){
    while( head!=NULL){
        cout<<head->data<<"->";
        head= head->next;
    }
    cout<<"NULL"<<endl;
}

int main(){

    node* head = new node();
    node* second = new node();
    node* third = new node();
    node* fourth = new node();
    head->data= 1;
    head->next= second;
    second->data =2;
    second->next= third;
    third->data=3;
    third->next= fourth;
    fourth->data =4;
    fourth->next = NULL;

    printList(head);

    searching(head,1);

    deleteElement(&head, 9);
    printList(head);

    
    return 0;
}

/*

*/