#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;
};
// time complexity is O(n^2);
// try to solve in O(n) time complexity.
// the comment in 17  line is for that if we want the same element as its sum
//for example for sum of 6 i can use 3 3 also .

void findSumNodes1(node* &head , int sum ){
    node* temp=  head;
    for(temp ;temp!= NULL;temp = temp->next){
        for(node* tempo = temp/*->next*/ ;tempo!=NULL;tempo=tempo->next){
            if( (temp->data + tempo->data) == sum){
                cout<<"("<<temp->data<<","<<tempo->data<<") ";
            }
        }
    }
}

void findSumNodes2(node *&head, int sum)
{
    node *temp = head;
    node *firstPtr = head;
    node *lastPtr = NULL;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    lastPtr = temp;
    bool flag = 0;
    while (firstPtr != lastPtr && lastPtr->next != firstPtr)
    {
        if ((firstPtr->data + lastPtr->data) > sum)
        {
            lastPtr = lastPtr->prev;
        }
        else if ((firstPtr->data + lastPtr->data) == sum)
        {
            flag = 1;
            cout << "(" << firstPtr->data << "," << lastPtr->data << ") ";
            firstPtr = firstPtr->next;
            lastPtr = lastPtr->prev;
        }
        else
        {
            firstPtr = firstPtr->next;
        }
    }
    if (flag == 0)
    {
        cout << "not possible with given element ." << endl;
    }
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
    push(head, 6);
    push(head, 5);
    push(head, 4);
    push(head, 3);
    push(head, 2);
    push(head, 1);
    printList(head);

    findSumNodes1(head, 6);
    cout<<endl;
    findSumNodes2(head , 6);
    return 0;
}