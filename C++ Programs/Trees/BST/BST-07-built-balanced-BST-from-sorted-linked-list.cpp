#include<bits/stdc++.h>
using namespace std;

class NodeL {
    public:
    int dataL;
    NodeL* next;

    NodeL(int val) {
        dataL = val;
        next = NULL;
    }
};

class NodeBST {
    public:
    int dataBST;
    NodeBST* left;
    NodeBST* right;

    NodeBST(int val) {
        dataBST = val;
        left  = NULL;
        right = NULL;
    }
};

void printLinkedList(NodeL* head) {
    NodeL* temp = head;
    while(temp!= NULL ) {
        cout << temp->dataL << "->";
        temp  = temp->next;
    }
    cout << "NULL" << endl;
}

int sizeOfLL(NodeL* head) {
    int count = 0;
    while( head != NULL ) {
        count++;
        head = head->next;
    }
    // cout << count << endl;
    return count;
}

NodeBST* builtBST(NodeL* head) {
    if( head == NULL ) {
        return NULL;
    }
    int n = sizeOfLL(head);
    if( n == 1) {
        return new NodeBST(head->dataL);
    }
    int count = 0;
    NodeL* headLeft = new NodeL(head->dataL);
    NodeL* temp1 = headLeft;

    while( count < ((n/2 )-2)) {
        head = head->next;
        temp1->next = new NodeL(head->dataL);
        temp1 = temp1->next;
        count++;
    }
    printLinkedList(headLeft);
    cout << endl;
    head = head->next;
     
    NodeBST* root = new NodeBST(head->dataL);

    head = head->next;
   NodeL* headRight = NULL;
    if( head != NULL ) {
        headRight = new NodeL(head->dataL);
         NodeL* temp2 = headRight;
         while(head->next != NULL ) {
             head = head->next;  
             temp2->next = new NodeL(head->dataL);
             temp2 = temp2->next;

         }
    }
    printLinkedList(headRight);
    cout << endl;

    root->left = builtBST(headLeft);
    root->right = builtBST(headRight);
    
    return root;
}

void insertAtHead(NodeL* &head, int val) {
    NodeL* newNode = new NodeL(val);
    if( head == NULL ) {
        head = newNode;
        return ;
    }
    newNode->next = head;
    head = newNode;
    return ;

}

void insertAtTail(NodeL* &head, int val) {
    NodeL* newNode = new NodeL(val);
    if( head == NULL ) {
        insertAtHead(head, val); // stub function 
        return ;
    }

    NodeL* temp = head;
    while( temp->next != NULL ) {
        temp = temp->next;
        
    }
    temp->next = newNode;
    return ;
}



void preOrder(NodeBST* root ) {
    if( root == NULL ) {
        return ;
    }
    cout << root->dataBST << " ";
    preOrder(root->left);
    preOrder(root->right);
    return ;
}

int main() {

    NodeL* head = NULL;
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int size  = sizeof(arr)/ sizeof(arr[0]);
    for( int i=0; i<6; i++ ) {
        insertAtTail(head, arr[i]);
    }

    printLinkedList(head);

    NodeBST* root = builtBST( head);
    
    preOrder(root);
    
    return 0;
}