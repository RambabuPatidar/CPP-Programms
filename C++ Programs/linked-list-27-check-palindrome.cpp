#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};


bool palindromeLinkedList(node *head){
    node* temp = head;
    stack<int> st;
    int count = 0;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    temp = head;
     for(int i=1;i<=count/2;i++){
            st.push(temp->data);
            temp = temp->next;
        }
    
    if( count%2 == 0){
        while(temp!= NULL){
            if(st.top()!= temp->data){
                return false;
            }
            st.pop();
            temp = temp->next;
        }
        return true;
    }else{
        temp = temp->next;
        while(temp!=NULL){
            if(st.top()!= temp->data){
                return false;
            }
            st.pop();
            temp = temp->next;
        }
        return true;
    }

}

void insertAtHead(node* &head, int val){
    node* newNode = new node(val);
    if( head == NULL){
        head = newNode;
        return ;
    }
    newNode->next = head;
    head = newNode;
    return;
}

void insertAtTail(node* &head, int val){
    node* newNode = new node(val);
    if( head == NULL){
        insertAtHead(head, val);
        return ;
    }
    node* temp = head;
    while(temp->next!= NULL){
        temp = temp->next;
    }
    temp->next = newNode;
    return ;
}

void display(node* head){
    node* temp = head;
    while(temp!= NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
    return ;
}

int main(){
    
    node* head = NULL;
    int arr[5] = {1,2,3,2,0};
    for(int i=0;i<5;i++){
        insertAtTail(head, arr[i]);

    }
    display(head);
    cout<<"\n";
    if(palindromeLinkedList(head)){
        cout<<"list is palindrome " << endl;
    } else {
        cout << "list is not palindrome " << endl;
    }
    cout<<"\n";
    
    return 0;
}