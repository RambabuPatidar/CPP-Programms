#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

int length(node *&head)
{
    node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

int findIntersection(node *&head1, node *&head2)
{

    int l1 = length(head1);
    int l2 = length(head2);
    int diff = 0;
    node *ptr1;
    node *ptr2;

    if (l1 > l2)
    {
        diff = l1 - l2;
        ptr1 = head1;
        ptr2 = head2;
    }
    else
    {
        diff = l2 - l1;
        ptr1 = head2;
        ptr2 = head1;
    }

    while (diff != 0)
    {
        ptr1 = ptr1->next;
        if (ptr1 == NULL)
        {
            return -1;
        }
        diff--;
    }

    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1 == ptr2)
        {
            return ptr2->data;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    return -1;
}

void intersect(node *&head1, node *&head2, int pos)
{
    node *temp1 = head1;
    int count = 1;

    while (count != pos - 1)
    {
        temp1 = temp1->next;
        count++;
    }

    node *temp2 = head2;
    while (temp2->next != NULL)
    {
        temp2 = temp2->next;
    }

    temp2->next = temp1->next;
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

    node *head1 = NULL;
    int arr[8] = {8, 7, 6, 5, 4, 3, 2, 1};
    for (int i = 0; i < 8; i++)
    {
        push(head1, arr[i]);
    }
    node *head2 = NULL;
    push(head2, 10);
    push(head2, 9);

    intersect(head1, head2, 5);
    printList(head1);
    printList(head2);

    cout << findIntersection(head1, head2) << endl;
    return 0;
}