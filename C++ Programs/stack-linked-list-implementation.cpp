#include<iostream>
// can you do it better ; and yes after
// many days i again tried this and 
// done it better and accurate 😊
// see modified;

using namespace std;
class node{
    public:
    int data ;
    node* next;
    node(int val){
        next = NULL;
        data = val;
    }
};

class stack{
    node* top ;
   node* head;
    public:
    stack(){
        top = NULL;
        head = NULL;
     
    }

    void push(int val);
    void pop();
    int Top();
    bool empty();
};

inline void stack::push(int val){
    node* newNode = new node(val);
    if( top == NULL){
        top =newNode;
        head = newNode;
    }
    top->next = newNode ;
    top = newNode;
    return ;
}

inline void stack::pop(){
    if( top == NULL){
        cout<<"stack is empty"<<endl;
        return ;
    }
    node* temp = head; 
    while(temp->next->next!= NULL ){
        temp = temp->next;
    }
    node* todelete = temp->next;
    temp->next = NULL;
    delete(todelete);
    top= temp;
    return ;
}

inline int stack::Top(){
    if( top == NULL){
        cout<<"stack is empty nothing on top"<<endl;
        return -1;
    }
    return top->data;
}

inline bool stack::empty(){
    if( top == NULL){
        return true;
    }
    return false;
}

int main(){

    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    cout<<st.empty()<<endl;

    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    // st.pop();
    cout<<st.Top()<<endl;
    cout<<st.empty()<<endl;


    
    return 0;
}