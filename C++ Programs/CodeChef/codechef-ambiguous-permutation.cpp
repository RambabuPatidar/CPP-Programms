#include<bits/stdc++.h>
using namespace std;

// per = permutation arr;
// revPer = reverse permutation arr;

void solution(int n){
    bool ambiguous= true;
    int per[n];
    for(int i=0;i<n;i++){
        cin>>per[i];
    }
    int revPer[n]={0};
    for(int i=0;i<n;i++){
        revPer[per[i]-1] =i+1; 
    }
   
    for(int i=0;i<n;i++){
        if(per[i] == revPer[i]){
            continue;
        }
        else{
            ambiguous = false;
            break;
        }
    }
    if(n != 0){
        if(ambiguous){
        cout<<"ambiguous"<<endl;
        }
        else{
        cout<<"not ambiguous"<<endl;    
        }
    }


}

int main(){
    int t;
    do
    {
        
        cin>>t;
        solution(t);
    } while (t!=0);
    
    return 0;
}