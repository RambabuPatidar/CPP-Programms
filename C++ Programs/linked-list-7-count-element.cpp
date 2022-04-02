#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

int countRecursive(node *&head)
{
    if (head == NULL)
    {
        return 0;
    }
    else
    {
        return 1 + countRecursive(head->next);
    }
}

void countElement(node *&head)
{
    node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    cout << count << endl;
}

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

void deletionAtGivenKey(node *&head, int k)
{
    node *prevNode = NULL;
    node *temp = head;
    int count = 0;
    if (temp == NULL)
    {
        cout << "we cannot delete anything here" << endl;
        return;
    }
    else
    {
        while (temp != NULL && count < k)
        {
            prevNode = temp;
            temp = temp->next;
            count++;
        }
        if (temp == NULL)
        {
            cout << "key is too long" << endl;
            return;
        }
        prevNode->next = temp->next;
        delete temp;
        return;
    }
}

void deletionOfKey(node *&head, int key)
{
    node *prevNode = NULL;
    node *temp = head;
    if (head != NULL && head->data == key)
    {
        cout << "we cannot delete anything here" << endl;
        return;
    }
    else
    {
        while (temp != NULL && temp->data != key)
        {
            prevNode = temp;

            temp = temp->next;
        }
        if (temp == NULL)
        {
            cout << "key is not present" << endl;
        }

        prevNode->next = temp->next;
        delete temp;
        return;
    }
}

void insertInBetween(node *&prevNode, int n)
{
    node *newNode = new node();
    newNode->data = n;
    newNode->next = prevNode;
    prevNode = newNode;
}

void insertAtTail(node *&head, int n)
{
    node *newNode = new node();
    newNode->data = n;
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

void inserAtHead(node *&head, int n)
{
    node *newNode = new node();
    newNode->data = n;
    newNode->next = head;
    head = newNode;
    return;
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

    inserAtHead(head, 123);
    printList(head);

    insertAtTail(head, 321);
    printList(head);

    insertInBetween(head->next->next, 333);
    printList(head);

    deletionOfKey(head, 2);
    printList(head);

    deletionAtGivenKey(head, 1);
    printList(head);

    deleteWholeLInkedList(head);
    printList(head);

    // as we have deleted this.its coming zero
    countElement(head);

    // count recursively.
    cout << countRecursive(head) << endl;

    return 0;
}
