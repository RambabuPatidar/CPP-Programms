#include<iostream>
using namespace std;

int main(){
     
     int number,digit,reverse=0;
     char ch;
     cout<<"Enter a number ?";
     cin>>number;
     // here number is assigned to n because we want number as it is at the last
     int n;
     n=number;
    // here first we reverse the number
    // still our programm is not responsive to values which contain zero at the last 
    //because when we reverse the num the prior zero gets neglected
    //for eg. 1390 reversed as 0931 but the zero in front does not make sense to computer
     
     while(n!=0){
         digit = n%10;
         reverse= (reverse*10) +(n%10);
         n/=10;
     }
     number = reverse;
    while(number!=0){
        digit = number%10;
        switch (digit)
        {
        case 0:
            cout<<"zero ";
            break;
        case 1:
            cout<<"one ";
            break;
        case 2:
            cout<<"two ";
            break;
        case 3:
            cout<<"three ";
            break;
        case 4:
            cout<<"four ";
            break;
        case 5:
            cout<<"five ";
            break;
        case 6:
            cout<<"six  ";
            break;
        case 7:
            cout<<"seven ";
            break;
        case 8:
            cout<<"eight ";
            break;
        case 9:
            cout<<"nine ";
            break;
        }
        number/=10;
    }
    return 0;
}