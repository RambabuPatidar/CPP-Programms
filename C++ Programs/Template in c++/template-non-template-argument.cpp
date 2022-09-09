#include<iostream>
using namespace std;

template<class T, int size>
class array{
    T arr[size]; // declaration of array and initialisation of array happend same time;

    public:

    array() {
        for(int i=0; i<size; i++) {
            arr[i] = i+1;
        }
    }
    void display() ;

};

template<class T, int size>
void array<T, size> ::display() {
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }

}

int main(){

    array<int, 10> a;
    
    a.display();
    return 0;
}