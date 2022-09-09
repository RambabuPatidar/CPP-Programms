#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

void deleteWholeLInkedList(node *&head)
{
    node *temp = head;
    node *nextNode = NULL;
    while (temp != NULL)
    {
        nextNode = temp->next;
        delete temp;
        temp = nextNode;
    }
    head = NULL;
}

void push(node *&head, int n)
{
    node *newNode = new node();
    newNode->data = n;
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
}

int main()
{

    node *head = NULL;
    push(head, 6);
    push(head, 5);
    push(head, 4);
    push(head, 3);
    push(head, 2);
    push(head, 1);

    printList(head);

    deleteWholeLInkedList(head);
    printList(head);

    return 0;
}
