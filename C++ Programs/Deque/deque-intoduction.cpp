#include<iostream>
#include<deque>
using namespace std;

int main(){

    deque<int> dq;
    dq.push_front(1);
    dq.push_back(2);
    dq.push_front(0);

    cout<<dq.size()<<endl;
    for( auto i : dq){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;
    dq.pop_back();
    dq.pop_front();
    cout<<dq.front()<<endl;
    dq.pop_front();

    return 0;
}