#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

void breakCycle(node *&head)
{
    node *fast = head;
    node *slow = head;

    do
    {
        fast = fast->next->next;
        slow = slow->next;
    } while (fast != slow);

    fast->next = head;

    while (fast->next != slow->next)
    {
        fast = fast->next;
        slow = slow->next;
    }

    slow->next = NULL;
}

void detectCycle(node *&head)
{
    node *fast = head;
    node *slow = head;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow)
        {
            cout << "cycle present" << endl;
            return;
        }
    }
    cout << "cycle not present" << endl;
    return;
}

void createCycle(node *&head, int position)
{
    node *temp = head;
    node *cycleNode = NULL;
    int count = 1;
    while (temp->next != NULL)
    {
        if (count == position)
        {
            cycleNode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = cycleNode->next;
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
    push(head, 9);
    push(head, 8);
    push(head, 7);
    push(head, 6);
    push(head, 5);
    push(head, 4);
    push(head, 3);
    push(head, 2);
    push(head, 1);

    printList(head);

    createCycle(head, 5);
    // printList(head);
    detectCycle(head);

    breakCycle(head);

    printList(head);

    return 0;
}