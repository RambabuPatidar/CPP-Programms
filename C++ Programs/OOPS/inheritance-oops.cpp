// #include<iostream>
// using namespace std;

// // -------> SINGLE INHERITANCE <------
// class a{
//      public:
//     void func(){
//         cout<<"inheritance";
//     }
// };
// class b:public a{
// };

// int main(){
//     b obj;
//     obj.func();
//     return 0;
// }

// -----> MULTIPLE INHERITANCE <-----

// #include<iostream>
// using namespace std;

// class a{
//     public:
//     void funcA(){
//         cout<<"multiple inheritance"<<endl;
//     }
// };
// class b{
//  public:
//  void funcB(){
//      cout<<"multiple inheritance return"<<endl;
//  }
// };
// class c:public a ,public b{

// };

// int main(){
     
//     c obj;
//     obj.funcA();
//     obj.funcB();
//     return 0;
// }

// -----> MULTI-LEVEL INHERITANCE <----

// #include<iostream>
// using namespace std;

// class a{
//    public:
//    void funcA(){
//        cout<<"multi-level inheritance 1"<<endl;
//    }
// };
// class b :public a{
//     public:
//     void funcB(){
//         cout<<"multi-level inheritance 2"<<endl;
//     }
// };
// class c : public b{
//                     // there can be other data member in every class 
// };

// int main(){

//     c obj;
//     obj.funcA();
//     obj.funcB();
//     return 0;
// }

// -----> HYBRID INHERITANCE <----

#include<iostream>
using namespace std;

class a{
    public:
    void funcA(){
        cout<<"hybrid inheritance 1"<<endl;
    }
};
class b :public a{
  
};
class c {
public:
void funcC(){
    cout<<" hybrid inheritance 3"<<endl;
}
};

class d :public b , public c{

};

int main(){
    d obj;
    obj.funcA();
    obj.funcC();
    
    return 0;
}

// -----> HIERARCHICAL INHERITANCE <-----
/*                  class A 
       class B                   class C
class D     class E         class F     classG

this is the hierarchical inheritance*/
                  