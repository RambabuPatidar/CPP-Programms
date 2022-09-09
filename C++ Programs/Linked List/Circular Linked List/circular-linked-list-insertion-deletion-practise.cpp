#include <iostream>
using namespace std;
// try making the constructure

class node
{
public:
    int data;
    node *next;
};

void deleteAtHead(node *&head)
{
    node *temp = head;
    do
    {
        temp = temp->next;
    } while (temp->next != head);
    node *todelete = head;
    temp->next = todelete->next;
    head = todelete->next;
    delete todelete;
    return;
}

void deletion(node *&head, int key)
{
    if (head->data == key)
    {
        deleteAtHead(head);
        return;
    }

    node *temp = head;
    do
    {
        temp = temp->next;
    } while (temp->next->data != key);

    node *todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}

void insertAtHead(node *&head, int k)
{
    node *newNode = new node();
    newNode->data = k;
    if (head == NULL)
    {
        newNode->next = head;
        head = newNode;
        return;
    }

    node *temp = head;
    do
    {
        temp = temp->next;
    } while (temp->next != head);
    newNode->next = head;

    temp->next = newNode;
    head = newNode;
    return;
}

void insertAtTail(node *&head, int k)
{
    if (head == NULL)
    {
        insertAtHead(head, k);
        return;
    }
    node *newNode = new node();
    newNode->data = k;
    node *temp = head;
    newNode->next = head;
    do
    {
        temp = temp->next;
    } while (temp->next != head);
    temp->next = newNode;
    return;
}

void creatCircular(node *&head)
{
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = head;
    return;
}

void push(node *&head, int val)
{
    node *newNode = new node();
    newNode->data = val;
    newNode->next = head;
    head = newNode;
    return;
}

void printList(node *head)
{
    node *temp = head;
    // while( temp!=NULL){
    //     cout<<temp->data<<"->";
    //     temp = temp->next;
    // }
    do
    {
        cout << temp->data << "->";
        temp = temp->next;
    } while (temp != head);

    cout << endl;
    return;
}

int main()
{

    node *head = NULL;
    push(head, 5);
    push(head, 4);
    push(head, 3);
    push(head, 2);
    push(head, 1);

    // printList(head);
    creatCircular(head);
    printList(head);
    insertAtTail(head, 121);
    insertAtHead(head, 212);
    printList(head);
    deletion(head, 3);
    printList(head);
    deletion(head, 212);
    printList(head);
    deleteAtHead(head);
    printList(head);
    return 0;
}