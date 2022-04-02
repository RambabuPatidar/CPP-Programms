#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    if(n>0){
        int firstDigi = n%10;
        n =n/10;
        if(n>0){
            int secondDigi = n%10;
            n=n/10;
            if(n>0){
                int thirdDigi = n%10;
                n/=10;
                if(n>0){
                    int fourthDigi = n%10;
                    n/=10;
                    if(n>0){
                        int fifthDigi = n%10;
                        n/=10;
                        if(n!=0){
                            cout<<"number is greater than five digit ";
                            return 0;
                        }
                        cout<<firstDigi<<secondDigi<<thirdDigi<<fourthDigi<<fifthDigi<<endl;
                    }
                    else{
                       cout<<"i told you to enter 5 digit";
                     }
                }
                else{
                  cout<<"i told you to enter 5 digit";
               }
            }
            else{
              cout<<"i told you to enter 5 digit";
            }
        }
        else{
        cout<<"i told you to enter 5 digit";
    }
        
    }
    else{
        cout<<"i told you to enter 5 digit";
    }
    return 0;
}