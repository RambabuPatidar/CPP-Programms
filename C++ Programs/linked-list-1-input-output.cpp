#include<iostream>
using namespace std;

// refer gfg set 1 to learn from basic gajab samjhaya hai bhai god level.

class node{
    public:
    int data;
    node* next;

};

 void printList(node* n){
        while ( n!=NULL){
            cout<<n->data<<"->";
            n = n->next;
        }
        cout<<"NULL";
}

int main(){

    node* head=NULL;
    node* second = NULL;
    node* third =NULL;

    head = new node();
    second = new node();
    third = new node();

    head->data= 1;
    head->next = second;

    second->data=2;
    second->next = third;

    third->data= 3;
    third->next = NULL;

    printList(head);
    
    return 0;
}

// ANOTHER WAY TO INPUT THE LINKED LIST.

// #include<iostream>
// using namespace std;

// class node{
//     public:
//     int data;
//     node* next;
// };
// void push(node** head_ref, int val){
//     node* newNode =new node();
//     newNode->data=val;
//     newNode->next=*head_ref;
//     *head_ref=newNode;
// }

// void printList(node* head){
//     while(head!=NULL){
//         cout<<head->data<<"->";
//         head =head->next;
//     }
//     cout<<"NULL"<<endl;
// }

// int main(){
//     node* head =NULL;
//     push(&head,1); 
//     push(&head,3);
//     push(&head,5);
//     printList(head);   
       
//     return 0;
// }