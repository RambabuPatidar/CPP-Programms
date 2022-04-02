#include<iostream>
using namespace std;

class student {
    string name ;
    public:
    int age;
    bool gender;

    void setName( string s){        // setter function.
        name =s;
    }

    student(){                      // this is default constructure or shallow copy
        cout<<"default constructure"<<endl;
    }                               // when nothing is passed this gets printed

    student(string s, int a , int g){// this is the parameterised constructur
        cout<<"parameterised constructure"<<endl;
        name =s;
        age =a;
        gender =g;
    }

    student(student &a){
        cout<<"copy constructure"<<endl;   // copy constructure or deep copy
        name = a.name;
        age = a.age;
        gender = a.gender;
    }
    
    ~student(){      // this work when all the constructure had done their work.
        cout<<"distructure called"<<endl;
    }

    void getName(){                 // can help in printing the name 
        cout<<name<<endl;
    }
    void printInfo(){
        cout<<"name= ";
        cout<<name<<endl;
        cout<<"age= ";
        cout<<age<<endl;
        cout<<"gender= ";
        cout<<gender<<endl;
    }

    // operator overloading 
    /*we are pushing the == this to perform some take which normally 
    it does not do like == does not compare the string but by overloading the 
    opertor we can tell it to behave what exactly we wnat like.*/
    bool operator == ( student &a){
        if( name == a.name && age == a.age && gender== a.gender){
            return true;
        }
        return false;
    }

};

int main(){
    
    // student arr[3];
    // for(int i=0;i<3;i++){
    //     string s;
    //     cout<<"name= ";
    //     cin>>s;         // this is how we access the private data 
    //     arr[i].setName(s);
    //     cout<<"age= ";
    //     cin>>arr[i].age;
    //     cout<<"gender= ";
    //     cin>>arr[i].gender;
    // }

    // for( int i=0;i<3;i++){
    //     arr[i].printInfo();
    // }
    

     student a("Ram" , 21,1);
    //  a.printInfo();
     
     student b("saroj" , 24,0);

     student c = a;          // student c(a) is also the same

     if( c==b){                 // operator overloading
          cout<<"same "<<endl;
     }
     else{
         cout<<"not same"<<endl;
     }
    return 0;
}