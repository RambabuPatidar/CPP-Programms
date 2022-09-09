#include<iostream>
using namespace std;

// it is not completed do give time to check and correct it .

class node{
    public:
    int data;
    node* next ;
    node* prev;
};

// if you want repeated also then uncomment the next
void tripletOfSum1(node* &head , int sum){
    node* temp = head;

    for( temp ; temp!=NULL; temp = temp->next){
        for(node* temp2 = temp/*->next*/;temp2!=NULL;temp2 = temp2->next) {
            for( node* temp3 = temp2/*->next*/ ; temp3!=NULL; temp3 = temp3->next){
                if( sum == (temp->data + temp2->data +temp3->data)){
                    cout<<"("<<temp->data<<","<<temp2->data<<","<<temp3->data<<") ";
                }
            }
        }
    }
}

void tripletOfSum2(node* &head , int sum ){
    node* firstPtr = head ;
   
    bool flag = 0;
    for( firstPtr ;firstPtr!=NULL ;firstPtr = firstPtr->next){
        node* secondPtr = firstPtr;
        node* lastPtr = NULL;
        node* temp = head;
        while ( temp->next!=NULL){
            temp = temp->next ;
        }

        lastPtr =temp;

        while ( secondPtr != lastPtr && lastPtr->next!= secondPtr){
            if(secondPtr->data +lastPtr->data + firstPtr->data == sum){
                flag = 1;
                cout<<"("<<firstPtr->data<<","<<secondPtr->data<<","<<lastPtr->data<<") ";
                secondPtr = secondPtr->next;
                lastPtr = lastPtr->prev;

            }
            else if( secondPtr->data +lastPtr->data + firstPtr->data < sum){
                secondPtr = secondPtr->next;

            }
            else{
                lastPtr = lastPtr->prev;
            }
        }
    }
    if ( flag==0){
        cout<<"no triplet possible"<<endl;
    }

}

void push(node* &head ,int val){
    node* newNode = new node();
    newNode->data = val;
    newNode->next = head;
    newNode->prev = NULL;
    if(head!= NULL){
        head->prev = newNode ;

    }
    head = newNode;
    return ;
}

void printList(node* &head){
    node* temp = head;
    cout<<"NULL<->";
    while(temp!= NULL){
        cout<<temp->data<<" <-> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
    return ;
}

int main(){
    node* head = NULL;
    push(head,9);
    push(head,8);
    push(head,7);
    push(head,6);
    push(head,4);
    push(head,3);
    push(head,2);
    push(head,1);
    push(head,0);

    printList(head);

    tripletOfSum1(head , 9);
    cout<<endl;

    tripletOfSum2(head,9);
    
    return 0;
}