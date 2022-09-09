#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
};
int frequency =0;
int count(node* head, int key)
{
    if (head == NULL)
        return frequency;
    if (head->data == key)
        frequency++;
    return count(head->next, key);
}

int countInt(node* &head ,int num){
    node* temp = head;
    int count =0;
    while( temp!= NULL){
        if( temp->data == num){
            count++;
        }
        temp= temp->next;
        
    }
    return count;
}

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
    push(head , 1);
    push(head , 7);
    push(head , 7);
    push(head , 1);
    push(head , 7);
    push(head , 5);
    push(head, 7); 

    printList(head);

    cout<< countInt(head , 7);
    cout<<endl;

  
    cout<<count(head,7);

    

    return 0;
}