#include<iostream>
#include<stack>
using namespace std;

class queu{
    
    stack<int> st;
    stack<int> stt;

    public:
    void Push(int x){
        st.push(x);
       
    }

    void pop(){
        if( st.empty() and stt.empty()){
            cout<<"nothing to pop"<<endl;
            return;
        }
        if(stt.empty()){
            while(!st.empty()){
            stt.push(st.top());
            st.pop();
            }
           
        }
        
         stt.pop();
    }

    int top(){
        if( st.empty() and stt.empty()){
            return -1;
        }
        if( stt.empty()){
            while( !st.empty()){
                stt.push(st.top());
                st.pop();

            }

        }
        return stt.top();
    }

    bool empty(){
        if( st.empty()and stt.empty()){
            return true;

        }
        return false;
    }

};

int main(){

    queu q;
    q.Push(123);
    q.Push(1234);
    q.Push(12345);
    cout<<q.top()<<endl;
    q.pop();
    cout<<q.top()<<endl;
    q.pop();
    cout<<q.top()<<endl;
    q.pop();
    cout<<q.top()<<endl;
    q.pop();
    cout<<q.empty()<<endl;
    q.Push(456);

    // again you can push and use all the functions
    cout<<q.top()<<endl;
    cout<<q.empty();
    

    return 0;
}