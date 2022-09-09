#include<iostream>
#include<queue>
using namespace std;

// implementing stack using queue;

class stack{
    public:
    
    queue<int> q1;  // helper queue one 
    queue<int> q2; // helper queue two

    void push(int val);
    void pop();
    int top();
    bool empty();

};
// push operation of stack 
void stack::push(int val){
    q1.push(val);
   
    return ;
}
// pop operation of stack
void stack::pop(){
    if( q1.empty()){
        cout<<"stack is already empty"<<endl;
        return ;
    }
    while( q1.size()!= 1){
        q2.push(q1.front());
        q1.pop();
    }
    q1.pop();
    
    
    queue<int> temp = q1;
    q1 = q2;
    q2 = temp;
    return ;
}
// return the top element of the stack;
int stack::top(){
    if( q1.empty()){
        cout<<"stack is already empty"<<endl;
        return -1;
    }
    while( q1.size()!= 1){
        q2.push(q1.front());
        q1.pop();
    }
   int ans = q1.front();
   q2.push(ans);
   q1.pop();
    queue<int> temp = q1;
    q1 = q2;
    q2 = temp;
    return ans;
}

// check wether the stack is empty or not 
bool stack::empty(){
    if(q1.empty()){
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
    cout<<st.top()<<endl;//-+5
    st.pop();
    cout<<st.empty()<<endl;//0
    st.pop();
    st.pop();
    st.pop();
    cout<<st.top()<<endl;//1
    cout<<st.empty()<<endl;//0
    st.pop();
    
    cout<<st.top()<<endl;//no elemetn on the top
    cout<<st.empty()<<endl;//1
    return 0;
}