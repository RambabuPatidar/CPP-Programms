#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;
};

// doubly linked list

void insertInBetween(node* &head, int pos , int val){
    node* newNode = new node();
    newNode->data = val;
    int count =1;
    node* temp = head;
    while( temp!=NULL && count!= pos){
        temp = temp->next;
        count++;
    }
    newNode->next = temp->next;
    newNode->prev = temp->next->prev;
    temp->next = newNode;
    temp->next->prev = newNode;
}

void deleteAtHead(node *&head)
{
    node *newNode = head;
    head = head->next;
    head->prev = NULL;
    delete newNode;
}

/* 
void deleteAtHead(node* &head){
    node* temp = head;
    temp->next->prev = NULL;
    head = temp->next;
    delete temp;
}
*/

void deletion(node *&head, int k)
{

    if (k == 1)
    {
        deleteAtHead(head);
        return;
    }
    node *temp = head;
    int count = 1;
    while (temp != NULL && count != k)
    {

        temp = temp->next;
        count++;
    }
    temp->prev->next = temp->next;

    if (temp->next != NULL)
    {
        temp->next->prev = temp->prev;
    }
    delete temp;
}

void insertAtHead(node *&head, int val)
{
    node *newNode = new node();
    newNode->data = val;
    newNode->next = head;

    if (head != NULL)
    {

        head->prev = newNode;
    }
    newNode->prev = NULL;
    head = newNode;
}

void insertAtTail(node *&head, int val)
{
    node *newNode = new node();
    newNode->data = val;
    node *temp = head;

    if (head == NULL)
    {
        insertAtHead(head, val);
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;
    newNode->next = NULL;
}

void printList(node *&head)
{
    node *temp = head;
    cout << "NULL<->";
    while (temp != NULL)
    {
        cout << temp->data << "<->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
    return;
}

int main()
{
    node *head = NULL;
    insertAtTail(head, 6);
    insertAtTail(head, 5);
    insertAtTail(head, 4);
    insertAtTail(head, 3);
    insertAtTail(head, 2);
    insertAtTail(head, 1);
    printList(head);
    insertAtHead(head, 34);
    printList(head);
    int k = 1;
    deletion(head, k);
    printList(head);

     insertInBetween(head, 4 , 34);
    printList(head);

    return 0;
}