#include<iostream>
using namespace std;

class node{
    public:
    int data; 
    node* next;

};

void getRecursively(node* &head,int k ,int count){
    node* temp = head;
    
    if( count == k){
        cout<<temp->data<<endl;
        return;
    }
    else{
        
        return getRecursively(temp->next ,k,++count);
    }
    
}

void getNthNode(node* &head , int k){
    node* temp = head;
    node* preNode = NULL;
    int count =0;
    
    while(temp!=NULL){
        if(count == k){
            cout<<temp->data<<endl;
            return;
        }
        count++;
        temp = temp->next;
    }
    
}

void push(node* &head, int val){
    node* newNode = new node();
    newNode->data = val;
    newNode->next = head;
    head = newNode;

}

void printList(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp= temp->next;
    }
    cout<<"NULL"<<endl;
    return;
}
int main(){
    node* head =NULL;
    push(head , 6);
    push(head , 12);
    push(head , 18);
    push(head , 24);
    push(head , 30);
    push(head , 36);

    printList(head);
    // this is also like array indexing start from 0;
    getNthNode(head,3);

    getRecursively(head,1,0);
    
    return 0;
}