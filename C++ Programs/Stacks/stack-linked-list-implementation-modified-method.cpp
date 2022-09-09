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

class stack{
    int top ;
    node* head;
    public:
    stack( ){
        top= -1;
        head =NULL;
    }

    void push( int val){
        node* newNode = new node(val);
        newNode->next =head;
        head = newNode;
        top++;
    }
    void pop(){
        if( top == -1){
            cout<<" not possible to pop"<<endl;
            return ;

        }
        node* todelete= head;
        head = head->next;
        delete(todelete);
        top--;
    }

    int  Top(){
        if( top == -1){
            cout<<" nothing on the top"<<endl;
            return -1;
        }
        return head->data;
    }
    bool empty(){
        if( top == -1){
            return true;
        }
        return false;
    }
};

int main(){

    stack st;
    st.push(1);
    cout<<st.Top()<<endl;
    cout<<st.empty()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    cout<<st.empty()<<endl;
    return 0;
}