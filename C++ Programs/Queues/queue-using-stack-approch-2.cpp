#include<iostream>
#include<stack>

using namespace std;

class queue{
    stack<int> st;
    public:

    void Push(int x){
        st.push(x);
        return ;
    }

    int pop(){
        if( st.empty()){
            cout<<"no element to pop";
            return -1 ;
        }
        int x = st.top();

        st.pop();
        if( st.empty()){
            return x;
        }
        int item = pop();
        st.push(x);
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
    q.Push(1);
    q.Push(2);
    q.Push(3);
    q.Push(4);
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.empty()<<endl;

    return 0;
}

/*here we had mergeg the top function and pop at the same time to work 
which we were using in the previous questions */