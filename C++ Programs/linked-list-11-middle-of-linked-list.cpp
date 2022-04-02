#include <iostream>
using namespace std;

class node
{
    public:
    int data;
    node *next;
};

void middleElement(node* &head){
    node* slowPtr = head;
    node* fastPtr = head;
    while(fastPtr->next != NULL && fastPtr->next->next!=NULL){
        fastPtr= fastPtr->next->next;
        slowPtr = slowPtr->next;
    }
    cout<<slowPtr->data<<endl;
}

int getMiddle(node* &head)
    {
        // Your code here
        
        node* sPtr = head;
        int count = 1;
        while(sPtr->next!=NULL){
            count++;
            sPtr = sPtr->next;
        }
        sPtr = head;
        int i =count/2;
        while(i--){
            sPtr = sPtr->next;
        }
        return sPtr->data;
    }

void printMiddleOfLinkedList(node* &head , int n){
    node* temp = head;
    
    int count =1;
    while(temp!= NULL){
        if( count == n/2){
            cout<<temp->data<<endl;
            return;
        }
        count++;
        temp=temp->next;
    }
}

void push(node *&head, int val)
{
    node *newNode = new node();
    newNode->data = val;
    newNode->next = head;
    head = newNode;
}

void printList(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
    return;
}

int main()
{
    node *head = NULL;
    push(head, 6);
    push(head, 12);
    push(head, 18);
    push(head, 24);
    push(head, 30);
    // push(head, 36);

    printList(head);
    
   printMiddleOfLinkedList(head,6);
   // here when even element occurs we took the prior one
   //as the middle it can be adjusted ok.
   middleElement(head);
   cout<<getMiddle(head);
   

    return 0;
}