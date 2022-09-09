#include<iostream>
using namespace std;

// base class 
class Basic_info{
    string name;
    int rollNo;
    bool  gender;  // 0 for male and 1 for female
    public:

    void getData(){
        cout<<"name : ";
        cin>>name;
        cout<<"rollNo : ";
        cin>>rollNo;
        cout<<"gender : ";
        cin>>gender;
    }
    void display(){
        cout<<"entered data  form base class is: "<<endl;
        cout<<"name :" << name <<endl;
        cout<<"rollNo :"<< rollNo <<endl;
        cout<<"gender :"<< gender <<endl;
    }
};
 
 // derived class 

class physical_fit :public Basic_info{
    int height ;
    int weight;
    public:
    
    void getData2(){
        cout<<"height :";
        cin>>height;
        cout<<"weight :";
        cin>>weight;
    }
    void display2(){
        cout<< " entered data of derived class is "<<endl;
        cout<<"height : " << height <<endl;
        cout<<"weight :"<< weight <<endl;
    }
};

int main(){
    
    Basic_info st1;
    cout<<"enter the data of base class "<<endl;
    st1.getData();
    st1.display();

    cout<<endl<<"enter the data of base class by object of derived class \n";
    physical_fit st2;
    st2.getData();
    st2.getData2();
    st2.display();
    st2.display2();
    return 0;
}