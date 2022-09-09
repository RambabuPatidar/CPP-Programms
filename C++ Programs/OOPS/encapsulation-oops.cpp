#include<iostream>
using namespace std;

/* encapsulation is nothing more than to know what data we wnat
to show the user and what not 
refer defination from intenet to get it better*/

class A{
    private:
    string name;
    void funcA(){
        cout<<"functionA"<<endl;
    }
    public:
    void funcB(){
        cout<<"functionB"<<endl;
    }
    void setFuncA(string s){   // setter function to acces the private data
            name =s;
    }
    void getFuncA(){ 
        cout<<"name = ";  //getter to print the private data
        cout<<name<<endl;
    }
    void print(){        // this can also work as toprint the data
        cout<<"name = ";
        cout<<name<<endl;
    }
    protected:
    void funcC(){
        cout<<"functionC"<<endl;
    }
};

int main(){
 
    A adata;
    string s;
    cout<<"name = ";
    cin>>s;
    adata.setFuncA(s);
    adata.getFuncA();
    adata.print();

    return 0;
}

// must read article INHERITANCE artical case no 6 
//on geeks for geeks 