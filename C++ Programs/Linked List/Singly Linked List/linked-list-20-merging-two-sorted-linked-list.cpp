// #include <iostream>
// using namespace std;

// class node
// {
// public:
//     int data;
//     node *next;
// };

// node* mergeRecursive(node* &head1, node* &head2){

//     if( head1 == NULL){
//         return head2;
//     }
//     else{
//         return head1;
//     }

//     node* result ;

//     if( head1->data < head2->data){
//         result = head1;
//         result->next = mergeRecursive(head1->next , head2);
//     }
//     else{
//         result = head2;
//         result->next = mergeRecursive(head1 , head2->next);
//     }

//     return result;

// }

// void deleteAtHead(node* & head){
//     node* todelete = head;
//     head  = todelete->next;
//     delete todelete;
//     return;
// }

// node* merge(node* & head1 , node* &head2 ){
//     node* temp1 = head1;
//     node* temp2 = head2;
//     node* dummy_node = new node();
//     dummy_node->data = -1;
//     node* dummy_ptr =dummy_node;

//     while(temp1!= NULL && temp2!= NULL){
//         if(temp1->data < temp2->data){
//             dummy_ptr->next = temp1;
//             temp1 = temp1->next;
//             dummy_ptr = dummy_ptr->next;

//         }
//         else{
//             dummy_ptr->next = temp2;
//             temp2 = temp2->next;
//             dummy_ptr = dummy_ptr->next;
//         }
//     }

//     if( temp1 ==NULL){
//         while(temp2!=NULL){
//             dummy_ptr->next = temp2;
//             temp2 = temp2->next;
//             dummy_ptr = dummy_ptr->next;
//         }
//     }
//     else{
//         while(temp1!=NULL){
//             dummy_ptr->next = temp1;
//             temp1 = temp1->next;
//             dummy_ptr = dummy_ptr->next;
//         }
//     }

//     deleteAtHead(dummy_node);
//     //  simply return dummy_node->next to avoid the 
//     // deleteAtHead function.
//     return dummy_node;

// }

// void push(node *&head, int val)
// {
//     node *newNode = new node();
//     newNode->data = val;
//     newNode->next = head;
//     head = newNode;
//     return;
// }

// void printList(node *&head)
// {
//     node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << "->";
//         temp = temp->next;
//     }
//     cout << "NULL" << endl;
//     return;
// }

// int main(){

//     node* head1 = NULL;
//     int arr1[8]={13,12,10,8,5,3,2,1};
//     for(int i=0;i<8;i++){
//         push(head1 ,arr1[i]);
//     }

//     node* head2 =NULL;
//     int arr2[5]={11,9,7,6,4};
//     for(int i=0;i<5;i++){
//         push(head2 , arr2[i]);
//     }
//     printList(head1);
//     printList(head2);

//     node* newHead = merge(head1, head2);
//     printList(newHead);

//     node* newHead2 = mergeRecursive(head1, head2);
//     printList(newHead2);
//     return 0;
// }

#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

node *recursiveMerge(node *&head1, node *&head2)
{

    if (head1 == NULL)
    {

        return head2;
    }
    if (head2 == NULL)
    {
        return head1;
    }
    node *result;
    if (head1->data < head2->data)
    {
        cout << "if statement" << endl;
        result = head1;
        cout << result->data << endl;
        result->next = recursiveMerge(head1->next, head2);
    }
    else
    {
        cout << "else statement" << endl;
        result = head2;
        cout << result->data << endl;
        result->next = recursiveMerge(head1, head2->next);
    }
    return result;
}

void deleteAtHead(node *&head)
{                          // its a good practise to delete
    node *todelete = head; // dangling pointers and free from heap
    head = todelete->next;
    delete (todelete);
    return;
}

node *mergeTwoSorted(node *&head1, node *&head2)
{
    node *dummyHead = new node(0);
    node *dummyPtr = dummyHead;
    node *ptr1 = head1;
    node *ptr2 = head2;
    while (ptr1 != NULL and ptr2 != NULL)
    {
        if (ptr1->data < ptr2->data)
        {
            dummyPtr->next = ptr1;
            dummyPtr = dummyPtr->next;
            ptr1 = ptr1->next;
        }
        else
        {
            dummyPtr->next = ptr2;
            dummyPtr = dummyPtr->next;
            ptr2 = ptr2->next;
        }
    }
    if (ptr1 == NULL)
    {
        while (ptr2 != NULL)
        {
            dummyPtr->next = ptr2;
            dummyPtr = dummyPtr->next;
            ptr2 = ptr2->next;
        }
    }
    else
    {
        while (ptr1 != NULL)
        {
            dummyPtr->next = ptr1;
            dummyPtr = dummyPtr->next;
            ptr1 = ptr1->next;
        }
    }
    deleteAtHead(dummyHead);
    return dummyHead;
}

void insertAtTail(node *&head, int val)
{
    node *newNode = new node(val);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    return;
}

void display(node *head)
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
    node *head2 = NULL;
    int n1;
    cin >> n1;
    int arr1[n1];
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < n1; i++)
    {
        insertAtTail(head1, arr1[i]);
    }

    int n2;
    cin >> n2;
    int arr2[n2];
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }
    for (int i = 0; i < n2; i++)
    {
        insertAtTail(head2, arr2[i]);
    }

    display(head1);
    display(head2);
    node *head3 = recursiveMerge(head1, head2);
    display(head3);

    return 0;
}