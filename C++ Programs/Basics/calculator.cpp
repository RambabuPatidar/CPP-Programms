#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//square
void square( int a , int b){
    for(int i=1;i<=a;i++){
        for( int j=1;j<=b;j++){
            cout<<"+ ";
        }
        cout<<endl;
    }
}

//floyds
void floyds( int a){
    int k=1;
    for( int i=1;i<=a;i++){
        for( int j=1;j<=i;j++){
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
}
//fibonacci series
void fibonacci(int a){
 int t1=0;
    int t2=1;
    int nextdigit;
    for(int i=1;i<=a;i++){
        cout<<t1<<" ";
        nextdigit = t1+t2;
        t1=t2;
        t2=nextdigit;

    }
    return;
}

//log with specified base
float ourlog(int a ){
    return log10(a);
}


//factorial function
//also used for ncr and npr;
int factorial(int a){
    int facto=1;
    for(int i=2;i<=a;i++){
        facto*=i;

    }
    return facto;
}
//natural logarithm function

float naturalLogarithm( double a){
    
    return log(a);
}

int main(){

    cout<<"\n\n\nthis is an calculator\n";
    int a,b,c,d;
    char sign;
    cout <<"enter the operation you want to do\n the brackets shows what to input for that operation.\nfor eg. for factorial you have to write !\n";
    cout<<"+  [+]\n-  [-]\n*  [*]\n  [/]\n[%](modulo)\n[!](factorial)\n[L](natural log)\n[l](log with 10 base )\n";
    cout<<" simple interest[S]--> time=year,rate =per annum\n ncr[C] \nnpr[P]\nfibonacci series till N[F]\nflyods triangle N[T]\nsquare input row col[s]\n\n \n \n \n \n  ";
    cin>>sign;
    cout<<"---> enter the four  digit to do the operation.<---\n if your operation consist only two values than input two and remaining two you have to put 1.\n";
    cin>>a>>b>>c>>d;
    switch (sign)
    {
    case '+':
        {int sum =a+b+c+d;
        cout<<"sum of the digits are:"<<sum<<endl;
        break;}
    case '-':
        {int substraction=a-b-c-d;
        cout<<"the substration of the digit are :"<<substraction<<endl;
        break;}
    case '*':
        {int multiplication=a*b*c*d;
        cout<<"the multiplication of the digit are :"<<multiplication<<endl;
        break;}
    case '/':
        {int division=a/b;
        cout<<"the division of the digit are :"<<division<<endl;
        break;}
    case '%':
        {int modulo=a%b;
        cout<<"the modulo of the digit are :"<<modulo<<endl;
        break;}
    case '!':
        {
        cout<<"the factorial of the digit are :"<<factorial(a)<<endl;
        break;}
    case 'L':
        { 
        cout<<"the natural logarithm of the digit are :"<<naturalLogarithm(a)<<endl;
        break;}
    case 'l':
        {
            cout<<"the log of "<<b<<"to the base 10 is :" <<ourlog(a)<<endl;
            break;

        }
    case 'S':
        {int si=(a*b*c)/100;
        cout<<"the simple interest of the digit are :"<<si<<endl;
        break;}
    case 'C':
        {int ansncr=factorial(a)/(factorial(a-b)*factorial(b));
        cout<<"the nCr of the digit are :"<<ansncr<<endl;
        break;}
    case 'P':
        {int ansnpr=(factorial(a)/factorial(a-b));
        cout<<"the nPr of the digit are :"<<ansnpr<<endl;
        break;}
    case 'F':
        { fibonacci(a);
        cout<<"the fibonacci series  till N are :"<<endl;
        break;}
    case 'T':
        { floyds(a);
        cout<<"the floyds tringle is shown as :"<<endl;
        break;}
        case 's':
        { square(a,b);
        cout<<"the square of respective row and column is  :"<<endl;
        break;}
    default:
        cout<<"i am still learning";
        break;
    }

    
    
    return 0;
}