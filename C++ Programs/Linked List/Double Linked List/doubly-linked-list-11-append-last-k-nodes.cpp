#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;
};

void appendKNodes2(node* &head ,int k , int n){
    node* temp = head ;
    node* newTail;
    node* newHead;
    int p = n-k;
    while(temp->next!=NULL){
        if(p ==1){
            newTail = temp;
        }
        if(p==0){
            newHead = temp;
        }
        p--;
        temp = temp->next;

    }

    newTail->next = NULL;
    newHead->prev =NULL;
    temp->next=head;
    head->prev = temp;
    head = newHead;
}

void appendKNodes1(node* &head , int k,int n){
    node* temp = head;
    node* storeHead =head;
    int p = n-k;
    while(p!=0){
        temp = temp->next;
        p--;
    }
    temp->prev->next = NULL;
    temp->prev = NULL;
    head = temp;

    while( temp->next !=NULL){
        temp = temp->next;
    }
    temp->next = storeHead;
    storeHead->prev = temp;
}

void push(node *&head, int val)
{
    node *newNode = new node();
    newNode->data = val;
    newNode->next = head;
    newNode->prev = NULL;
    if (head != NULL)
    {
        head->prev = newNode;
    }
    head = newNode;
    return;
}

void printList(node *&head)
{
    node *temp = head;
    cout << "NULL<->";
    while (temp != NULL)
    {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
    return;
}

int main()
{

    node *head = NULL;
    push(head, 8);
    push(head, 7);
    push(head, 6);
    push(head, 5);
    push(head, 4);
    push(head, 3);
    push(head, 2);
    push(head, 1);

    printList(head);

    appendKNodes1(head , 7 ,8);
    printList(head);
    // result of appendKNodes2 is the transformation of appenKNodes1
    //because in first time head value is changed.
    appendKNodes2(head, 3, 8);
    printList(head);
    return 0;
}