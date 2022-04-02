#include <iostream>
using namespace std;
//this is mine approch do check apni kaksha for
// clean code this is also clean try to understand
// the concept mine is easier and better understable.
class node
{

public:
    int data;
    node *next;
};

void deleteAtHead(node *&head)
{
    node *temp = head;

    while (temp->next != head)
    {
        temp = temp->next;
    }

    node *todelete = head;
    temp->next = todelete->next;
    head = todelete->next;
    delete todelete;
    return;
}

void deletion(node *&head, int pos)
{

    if (pos == 1)
    {
        deleteAtHead(head);
        return;
    }

    node *temp = head;
    int count = 1;
    while (count != pos - 1)
    {
        count++;
        temp = temp->next;
    }

    node *todelete = temp->next;
    temp->next = todelete->next;
    delete todelete;
}

void insertAtHead(node *&head, int val)
{

    node *newNode = new node();
    newNode->data = val;
    if (head == NULL)
    {
        newNode->next = newNode;
        head = newNode;
        return;
    }

    newNode->next = head;
    node *temp = head;

    do
    {
        temp = temp->next;
    } while (temp->next != head);
    temp->next = newNode;
    head = newNode;
}

void insertAtTail(node *&head, int val)
{

    if (head == NULL)
    {
        insertAtHead(head, val);
        return;
    }
    node *temp = head;
    node *newNode = new node();
    newNode->data = val;
    newNode->next = head;
    do
    {
        temp = temp->next;
    } while (temp->next != head);
    temp->next = newNode;
    return;
}

void makeCircular(node *&head)
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

void printList(node *&head)
{
    node *temp = head;
    // while(temp!= NULL){
    //     cout<<temp->data<<"->";
    //     temp = temp->next;
    // }
    // cout<<"NULL"<<endl;

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
    int arr[5] = {5, 4, 3, 2, 1};
    for (int i = 0; i < 5; i++)
    {
        push(head, arr[i]);
    }

    // printList(head);
    makeCircular(head);
    printList(head);
    insertAtTail(head, 6);
    insertAtTail(head, 7);
    insertAtHead(head, 0);
    printList(head);
    deletion(head, 8);
    printList(head);
    deleteAtHead(head);
    printList(head);

    return 0;
}