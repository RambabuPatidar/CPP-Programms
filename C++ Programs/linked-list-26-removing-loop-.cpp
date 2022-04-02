// remove loop from list
#include<iostream>
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


bool circularLinkedList(node* &head){
    node* fast = head;
    node* slow = head;
    do
    {
        fast = fast->next->next;
        slow =slow->next; 

    } while (fast != slow);
    
    if(fast == head and slow == head){
        return true;
    }
    return false;
}

void removeCycle(node* &head){
    node* slow = head;
    node* fast = head;
    do
    {
        /* code */
        fast = fast->next->next;
        slow = slow->next;
    } while (fast!= slow);
    fast = head;
    while( fast->next !=slow->next){
        fast= fast->next;
        slow = slow->next;
    }
    slow->next = NULL;
    return;
}

bool iscycle(node* &head){
    node* fast = head;
    node* slow = head;
    while( fast->next != NULL and fast->next->next!= NULL){
        fast = fast->next->next;
        slow  = slow->next;
        if(fast== slow){
            return true;
        }

    }
    return false;

}

void removeLoop(node* &head){
    
    if(iscycle(head)){
        cout<<"iscycle"<<endl;
        if(circularLinkedList(head)){
            cout<<"circularLinkedList"<<endl;
            node* temp= head;
            while( temp->next != head){
                temp = temp->next;
            }
            temp->next = NULL;
        }
        else{
            cout<<"node wali cycle"<<endl;
            removeCycle(head);
        }
    }
    else{
        cout<<"no cycle is present so nothing to remove"<<endl;
        return ;
    }
}


void creatLoop(node* &head, int pos){
    if( pos == 0){
        return ;
    }
    node* temp = head;
    int count = 1;
    while(count!= pos and temp!=NULL){
        temp = temp->next;
        count++;
    } 
    
    node* temp2 = head;
    while( temp2->next!= NULL){
        temp2 = temp2->next;
    }
    temp2->next = temp;
    return ;
}

void insertAtHead(node* &head, int val){
    node* newNode  = new node(val);
    if( head == NULL){
        head = newNode;
        return ;
    }

    newNode->next = head;
    head = newNode;
    return ;

}

void insertAtTail(node* &head, int val){
    node* newNode = new node(val);
    if( head == NULL){
        insertAtHead(head, val);
        return ;
    }

    node* temp = head;
    while(temp->next!= NULL){
        temp= temp->next;
    }
    temp->next = newNode;
    return;
}

void display(node* head){
    while(head != NULL){
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<"NULL \n";
    return ;
}

int main(){
    node* head = NULL;
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        insertAtTail(head, arr[i]);
    }
    display(head);
    cout<<"\n";
    cout<<"enter the postion which link is to be created"<<endl;
    int pos ; cin>>pos;
    creatLoop(head,pos);
    removeLoop(head);
    display(head);
    
    return 0;
}