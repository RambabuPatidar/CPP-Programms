#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
};

// if you don't want to find the length then use two ptr
//to find the middle, one is moving faster than another

int length(node* head){
    node* temp =head ;
    int count =0;
    while( temp!=NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

void makeMiddleHead(node*&head ){
    node* temp = head;
    int mid =1;
    node* preNode =NULL;
    while( temp!=NULL && mid != ((length(head)/2)+1)  ){
        if(mid== length(head)/2){
            preNode = temp;
        }
        temp= temp->next;
        mid++;

    }
    
    preNode->next = temp->next;
    temp->next = head;
    head = temp;

}

void push(node* &head, int val){
    node* newNode = new node();
    newNode->data = val;
    newNode->next = head ;
    head = newNode;
    return ;
}

void printList(node* &head ){
    node* temp  = head;
    while(temp !=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
    return ;
}

int main(){

    node* head = NULL;
    int arr[9]={9,8,7,6,5,4,3,2,1};
    for(int i=0;i<9;i++){
        push(head, arr[i]);
    }
    printList(head);

    makeMiddleHead(head );
    printList(head);
    return 0;
}