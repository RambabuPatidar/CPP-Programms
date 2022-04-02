#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

// Recursively  
void getNthiteratively(node* &head , int k,int n ){
    node* temp = head;
    int count = n;
    while( temp!=NULL){
        if(count == k){
            cout<<temp->data<<endl;
            return;
        }
        count--;
        temp= temp->next;
    }

}

//Recursively.
void getNthFromLast(node* &head , int k,int count){
    node* temp = head;
    if(count == k){
        cout<<temp->data<<endl;
        return;
    }
    else{
        return getNthFromLast(temp->next,k,--count);
    }
}
void push(node *&head, int val)
{
    node *newNode = new node();
    newNode->data = val;
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
    return;
}
int main()
{
    node *head = NULL;
    push(head, 6);
    push(head, 12);
    push(head, 18);
    push(head, 24);
    push(head, 30);
    push(head, 36);

    printList(head);
    
    getNthFromLast(head , 4,6);

    getNthiteratively(head , 5 ,6);

    return 0;
}