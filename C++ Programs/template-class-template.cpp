#include<iostream>
using namespace std;
#define  n 5

template<class T>
class vector {
    T* v;

    public:

    vector() {
        v = new T[n];
        for(int i=0; i<n; i++) {
            v[i] = 0;
        }
    }

    vector(T* arr) {
        for(int i=0; i<n; i++) {
            v[i] = arr[i];
        }
    }

    T operator*(vector &x){ 
        T sum = 0;
        for(int i=0; i<n ;i++) {
            sum += this->v[i] * x.v[i];
            
        }
        return sum;
    }
    void display(){ 
        for(int i=0; i<n ;i++) {
            cout << v[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    float a[] = {1.12, 2.23, 3.12, 4.7, 5.90};
    float b[] = {1.2, 2.089, 3.23, 4.878, 5.98};
    vector<float> v1;
    vector<float> v2;
    v1 = a;
    v2 = b;
    v1.display();
    v2.display();
    float sum =   v1.operator*(v2);
    cout << sum << endl;

    return 0;
}