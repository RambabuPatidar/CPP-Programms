#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node* next;
};

void removeRecursively(node* &head){
    node* currPtr = head;
    node* next ;
    if( currPtr == NULL){
        return;
    }
   if(head->next !=NULL){
    if( currPtr->data== currPtr->next->data){
        next = currPtr->next;
        currPtr->next = currPtr->next->next;
        delete next;
        removeRecursively(currPtr);
    }
    else{
        removeRecursively(currPtr->next);
    }
    }
    
}

void removeDuplicate(node* &head ){
  
  node* currPtr = head;
  node* next;
  while( currPtr->next !=NULL){
      if( currPtr->data == currPtr->next->data){
          next = currPtr->next->next;
          delete currPtr->next;
          currPtr->next = next;
      }
      else{
          currPtr =currPtr->next;
      }
  }  
   
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
    push(head, 9);
    push(head, 8);
    push(head, 8);
    push(head, 7);
    push(head, 7);
    push(head, 6);
    push(head, 6);
    push(head, 6);
    push(head, 5);
    push(head ,5);
    push(head ,5);
    push(head ,4);
    push(head ,4);
    push(head ,3);
    push(head ,3);
    push(head ,2);
    push(head ,2);
    push(head, 1);
    push(head, 1);
    push(head, 1);
    push(head, 1);

    printList(head);
    // removeDuplicate(head);
    // printList(head);

    removeRecursively(head);
    printList(head);
    



   
    
    
    return 0;
}