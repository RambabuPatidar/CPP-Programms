#include<iostream>
#include<stack>
using namespace std;

class queue{
    public:
    stack<int> st;

    void enqueue(int val){
        st.push(val);
        return;
    }
    void dequeue(){
        if(st.empty()){
            cout<<"stack is empty"<<endl;
            return ;
        }

        int store = st.top();
        st.pop();
        if( st.empty()){
            return ;
        }

        dequeue();
        st.push(store);
        return ;
    }

    int top(){
        if(st.empty()){
            cout<<"stack is empty"<<endl;
            return -1 ;
        }

        int store = st.top();
        st.pop();
        if( st.empty()){
            return store;
        }

       int item = top();
        st.push(store);
        return item;
    }
    bool empty(){
        if( st.empty()){
            return true;
        }
        return false;
    }
};

int main(){

    queue q;
    q.enqueue(1);
    q.enqueue(2);
    cout<<q.top()<<endl;
    q.dequeue();
    cout<<q.empty()<<endl;
    cout<<q.top()<<endl;
    q.dequeue();
    cout<<q.empty()<<endl;
    
    return 0;
}