#include<iostream>
using namespace std;

int main(){

    int n=100;
    
    for( int i=2;i<=n;i++){
        bool flag=1;
        for( int j=2;j<i;j++){
            if ( i%j==0){
                flag=0;
               
            }
         
              
            
        }
        if(flag)
          cout<<i<<" ";
        
    }

    
    return 0;
}

// #include <iostream>
// #include <conio.h>
// using namespace std;
// int main()
// {
//     int i,j,n;
//     cout<<"Enter the number until which want to print prime\n";
//     cin>>n;
//     cout<<"Prime numbers 1 to "<<n<<" are:"<<endl;
//     for(i=2; i<=n; i++){
//         int counter=1;
//         for(j=2; j<i; j++){
//         if(i%j==0){
//             counter =0;
//         }
//     }
//     if(counter){
//         cout<<i<<" ";
//     }
//     }
// getch();
//     return 0;
// }