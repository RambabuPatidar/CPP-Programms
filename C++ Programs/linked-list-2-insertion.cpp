#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

void insertAtHead(node **head_ref, int val)
{
    node *newNode = NULL;
    newNode = new node();

    newNode->data = val;
    newNode->next = *head_ref;
    *head_ref = newNode;
}

void insertInBetween(node *preNode, int val)
{
    if (preNode == NULL)
    {
        cout << "here cannot be inserted .";
    }
    node *newNode = NULL;
    newNode = new node();
    newNode->data = val;
    newNode->next = preNode->next;
    preNode->next = newNode;
}

void insertAtEnd(node **head_ref, int val)
{
    node *newNode = NULL;
    newNode = new node();
    newNode->data = val;
    newNode->next = NULL;

    node *temp = *head_ref;
    if (head_ref == NULL)
    {
        *head_ref = newNode;
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    return;
}

void printList(node *head)
{

    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main()
{

    node *head = NULL;
    node *second = NULL;
    node *third = NULL;
    head = new node();
    second = new node();
    third = new node();

    head->data = 5;
    head->next = second;
    second->data = 10;
    second->next = third;
    third->data = 15;
    third->next = NULL;

    printList(head);
    insertAtHead(&head, 12);
    printList(head);
    insertInBetween(second->next, 24);
    printList(head);
    insertAtEnd(&head, 36);
    printList(head);

    return 0;
}



 