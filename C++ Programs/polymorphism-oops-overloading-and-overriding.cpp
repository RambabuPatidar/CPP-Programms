// #include<iostream>
// using namespace std;

// // poly =many morphism = forms(dasha)

// // FUNCTION OVERLOADING 
// class ram{
//      public:
//      void funcA(){
//          cout<<"i am with no argument "<<endl;
//      }
//      void funcA(int a){
//          cout<<" i am with argument int"<<endl;
//      }
//      void funcA(char ch){
//          cout<<"i am with argument char"<<endl;
//      }
// };

// int main(){
//     ram obj;
//     obj.funcA();
//     obj.funcA(445);
//     obj.funcA('e');
//     return 0;
// }

//  OPERATOR OVERLOADING

// #include<iostream>
// using namespace std;

// class complex {
//      private:
//      int real ;
//      int imag;
//      public:
     
//      complex(int r=0, int i=0){
//          real =r;
//          imag =i;
//      }

//      complex operator + (complex const &obj){
//          complex result;
//          result.imag = imag +obj.imag;
//          result.real = real +obj.real;
//          return result;
//      }


//    void printInfo(){
//        cout<<real <<" + i"<<imag<<endl;
//     }

// };

// int main(){

//         complex c1(12, 2);
//         complex c2(13,5);
//         complex c3 = c1+c2;
//         c3.printInfo();
//     return 0;
// }

//  >>------> FUNCTION OVERRIDING <-------<<

#include<iostream>
using namespace std;

class base{
    public:
   void print(){
        cout<<"i am print in the base class"<<endl;
    }
    void display(){
        cout<<"i am display in the base class"<<endl;
    }
};
class child:public base{
    public:
    void print(){
        cout<<"i am print in the child class"<<endl;
    }
    void display(){
        cout<<"i am display in the child class"<<endl;
    }

};


int main(){

    base *baseptr;
    child c;
    baseptr = &c;
    baseptr ->display();
    baseptr ->print();

    /*basically we had passed the address of child
    class in the base class pointer so it should have to print the 
    function of child class but it is not doint so 
    that why we use virtual keyword in fornt if void function
    got it if not refer polymorphism video apna college*/
    
    return 0;
}