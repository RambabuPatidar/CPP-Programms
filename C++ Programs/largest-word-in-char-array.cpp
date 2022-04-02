#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    cin.ignore();
    char array[ n+1];
    cin.getline( array, n);
    cin.ignore();

    int curr_length=0;
    int max_length=0;
    int i=0;
    int ans;
    while( i<n){
        if ( array[i]==' '||array[i]=='\0'){
            if ( curr_length>max_length){
                max_length=curr_length;
            }
            
            
            curr_length=0;
        }
        else{
            curr_length++;
        }
        if(array[i]=='\0'){
            break;
        }
        i++;
    }

    cout<<array<<endl;
    cout<<max_length<<endl;
    return 0;
}