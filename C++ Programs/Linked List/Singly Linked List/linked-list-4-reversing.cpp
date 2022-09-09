#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

node *reverseRecursive(node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    node *rest = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;

    return rest;
}

node *reverseLinkList(node *&head)
{
    node *preptr = NULL;
    node *currptr = head;
    node *nextptr;
    while (currptr != NULL)
    {
        nextptr = currptr->next;
        currptr->next = preptr;

        preptr = currptr;
        currptr = nextptr;
    }
    return preptr;
}

void insertInBetween(node *&preNode, int val)
{
    node *newNode = new node();
    newNode->data = val;
    newNode->next = preNode->next;
    preNode->next = newNode;
}

void insertAtTail(node *&head, int val)
{
    node *newNode = new node();
    newNode->data = val;
    newNode->next = NULL;
    node *temp = head;
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        return;
    }
}

void insertAtHead(node *&head, int val)
{
    node *newNode = new node();
    newNode->data = val;
    newNode->next = head;
    head = newNode;
}

void push(node *&head, int n)
{
    node *newNode = new node();
    newNode->data = n;
    newNode->next = head;
    head = newNode;
}
void printList(node *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL" << endl;
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

    printList(head);
    insertAtHead(head, 123);
    printList(head);
    insertAtTail(head, 321);
    printList(head);
    insertInBetween(head->next->next->next, 222);
    printList(head);

    node *newHead = reverseLinkList(head);
    printList(newHead);

    node *newHead2 = reverseRecursive(newHead);
    printList(newHead2);

    return 0;
}