#include<iostream>
using namespace std;

#define n  20

class queue{
    public:
    int* arr;
    int front;
    int back;

    queue(){
        arr = new int[n];
        front  = -1;
        back = -1;

    }

    void enqueue(int x){
        if( back == n-1){
            cout<<"queue overflowed";
        }
        back++;
        arr[back] = x;

        if(front == -1){
            front++;
        }
    }

    void dequeue(){
        if( front == -1 || front>back){
            cout<<"no element in queue";

        }
        front ++;
    }

    int peek(){
        if( front == -1 || front>back){
            return -1;
        }
        return arr[front];
    }

    bool empty(){
        if( front == -1 || front>back){
            return 1;
        }
        return 0;
    }

};

int main(){

    queue q;
    q.enqueue(5);
    q.enqueue(4);
    q.enqueue(3);
    q.enqueue(2);
    q.enqueue(1);

    cout<<q.peek()<<endl;
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    cout<<q.empty();




    return 0;
}