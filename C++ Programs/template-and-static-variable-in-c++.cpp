#include<iostream>
using namespace std;
// for each data type a new static varible count is getting created and 
// the value of respective data type is increasing 

// https://www.geeksforgeeks.org/templates-and-static-variables-in-c/
template<class T>

class a{

    public:
    static int count;
    a() {
         cout << "constructor called" << endl;
         count++;
    }
};

template<class T>
int a<T> ::count = 0;

int main() {

    a<int> p;
    a<int> q;
    a<int> r;
    a<float> s;
    a<float> t;
    a<double> u;

    cout << a<int>::count << endl;
    cout << a<float>:: count << endl;
    cout << a<double>:: count << endl;
    return 0;
}