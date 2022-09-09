#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;
};

void countDoubly(node* &head){
    node* temp = head;
    int count = 0;
    while(temp!= NULL){
        count++;
        temp = temp->next;
    }
    cout<<count<<endl;
}

void searchDoubly(node* &head , int k){
    node* temp = head;
    while(temp!= NULL){
        if(temp->data == k){
            cout<<"present"<<endl;
            return;
        }
        temp = temp->next;
    }
    cout<<"element not present"<<endl;
    return;
}

void push(node *&head, int val)
{
    node *newNode = new node();
    newNode->data = val;
    newNode->prev = NULL;
    newNode->next = head;
    if (head != NULL)
    {
        head->prev = newNode;
    }
    head = newNode ;
    return;
}
void printList( node*&head){
    node* temp = head;
    cout<<"NULL<->";
    while(temp!= NULL){
        cout<<temp->data<<" <-> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
    return;
}
int main()
{
    node* head = NULL;
    push(head , 6);
    push(head ,5);
    push(head ,4);
    push(head ,3);
    push(head ,2);
    push(head ,1);
    
    printList(head);
    countDoubly(head);
    searchDoubly(head , 90);
    return 0;
}