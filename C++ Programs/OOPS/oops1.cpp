    #include<iostream>
using namespace std;

class student{
    public:
    string name;
    int age;
    bool gender;

     void printInfo(){
         cout<<"Name= ";
         cout<<name<<endl;
         cout<<"Age= ";
         cout<<age<<endl;
         cout<<"Gender= ";
         cout<<gender<<endl;
         
     }
};

int main(){
     
    //  student a ;   <--  instances which are objects of the class
    //  a.name = 'Rambabu';
    //  a.age = 20;
    //  a.gender = false;

    //  student b ;
    //  a.name = 'Pambabu';
    //  a.age = 21;
    //  a.gender = false;
     //ANOTHER WAY TO STORE THE VALUE IS ;
     student arr[4];
     for( int i=0;i<4;i++){
            cout<<"Name= ";
            cin>>arr[i].name;
            cout<<"Age= ";
            cin>>arr[i].age;
            cout<<"gender= ";
            cin>>arr[i].gender;
     }

     for( int i=0;i<4;i++){
         arr[i].printInfo();
     }

   
    return 0;
}
