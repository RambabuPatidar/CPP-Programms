#include<iostream>
using namespace std;
#define n 5;
// we can also use the default data type for the template
// eg. template<class T1=int, class T2= float>
template<class T1  , class T2  > 
class info{
    T1 a;
    T2 b;

    public:
    info(T1 p, T2 q) {
        a = p;
        b = q;
    }
    void display() {
    cout << a << " "<< b << endl;

    }
};


int main(){
    info<string, string> r("Patidar sahab", "Rambabu");
    r.display();

    // for default case 
    // info<> defalt(12, 0.3010f);
    // defalt.display();
    return 0;
}