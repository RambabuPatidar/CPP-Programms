#include<iostream>
#include<queue>
using namespace std;

class stack{
    int N;
    queue<int> q;
    queue<int> qq;

    public:
    stack(){
        N = 0;
    }

    void push(int x){
        qq.push(x);
        N++;
    }

    void pop(){
        if( qq.empty()){
            cout<<"nothing to pop"<<endl;
            return ;
        }
        while(qq.size()!=1){
             q.push(qq.front());
             qq.pop();
        }
        qq.pop();
        N--;
        queue<int> temp =q;
        q= qq;
        qq = temp;
   
    }

    int top(){
        if(  qq.empty()){
            cout<<"nothing in the top";
            return -1;
        }

        while(qq.size()!=1){
             q.push(qq.front());
             qq.pop();
        }

        int ans = qq.front();
        qq.pop();
        q.push(ans);

        queue<int> temp =q;
        q= qq;
        qq = temp;

        return ans;
        
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