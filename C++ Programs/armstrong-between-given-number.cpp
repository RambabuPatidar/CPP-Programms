#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    for( int i=1 ;i<=n;i++){
        int sum =0;
        int num = i;
        while(num>0){
            int lastdigit = num%10;
            sum += pow( lastdigit,3);//here if you change the 3 to four than a four digit number should be the input to see that what are the armstrong number in between 10000to 99999;
            num/=10;
        }
        if ( sum == i){
            cout<<i<<" ";
        }
      
    }
    return 0;
}