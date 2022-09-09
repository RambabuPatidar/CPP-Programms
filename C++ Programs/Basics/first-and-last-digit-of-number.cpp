#include <iostream>
using namespace std;

int main()
{
   int a;
   cin>>a;
   
   int div =1;
    int lastdigi= a%10;
    int tempA = a;
   while( a>9){
      
       a/=10;
        div= div*10;
       
   }
   cout<<div<<endl;
int firstdigi = tempA/div;
cout<<firstdigi<<"and "<<lastdigi<<endl;
  
    return 0;
}