#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next =NULL;
    }
};

class queue{
    node* front ;
    node* back;
    public:

    queue(){
        front = NULL;
        back = NULL;

    }

    void push(int x){
        node* newNode  = new node(x);
        if( front == NULL){
            back = newNode ;
            front = newNode;
            return ;
        }
        back->next = newNode;
        back = newNode;
    }

    void pop(){
        if( front == NULL){
            cout<<"queue is empty";
            return ;
        }

        node* todelete = front;
        front = front->next;
        delete todelete;
    }

    int top(){
        if( front == NULL){
            cout<<"No element to in queue"<<endl;
            return -1;
        }

        return front->data;

    }
    bool empty(){
        if( front == NULL){
            return true;
        }
        return false;
    }
};

int main(){

    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout<<q.top()<<endl;
    q.pop();
    cout<<q.top()<<endl;
    q.pop();
    cout<<q.top()<<endl;
    q.pop();
    cout<<q.empty()<<endl;
    return 0;
}

