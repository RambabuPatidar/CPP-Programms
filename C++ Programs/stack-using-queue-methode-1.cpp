#include<iostream>
#include<queue>
using namespace std;


class stack {
    int N;
    queue<int> q;
    queue<int> qq;

    public:

    stack(){
        N= 0;
    }

    void push(int val){
        qq.push(val);
        N++;
        while(!q.empty()){
            qq.push(q.front());
            q.pop();
        }

         queue<int> temp =q;
        q = qq;
        qq = temp;

    }
    void pop(){

        if(q.empty()){
            cout<<"nothing to pop"<<endl;
            return ;
        }
        q.pop();
        N--;
    }

    int top(){
        if( q.empty()){
            cout<<"nothing in the top";
            return -1;
        }
        return q.front();
    }

    int size(){
        return N;
    }

    bool empty(){
        if( q.empty() && qq.empty()){
            return true;
        }
        return false;
    }


};
int main(){

    stack st;
    st.push(1);
    st.push(2);
    st.push(3);

    cout<<st.size()<<endl;
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.size()<<endl;
    cout<<st.empty()<<endl;
    return 0;
}