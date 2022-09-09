#include<bits/stdc++.h>
using namespace std;

bool check(double d12, double d23, double d31,int r){
    int n =1;
    int count =0;
    while(n--){
        if( d12 <= r){
            count++;
        }
        if( d23 <=r){
            count++;
        }
        if( d31<=r){
            count++;
        }
    }
    if( count>=2){
        return true;
    }
    else{
        return false;
    }
}

double dis(int a, int b,int x, int y){
    return  sqrt((pow(x-a, 2) + pow(y-b,2)));
}

int main(){

    int t;
    cin>>t;
    while(t--){
        int r, x1,y1,x2,y2,x3,y3;
        cin>>r>>x1>>y1>>x2>>y2>>x3>>y3;
        double d12 = dis(x1,y1,x2,y2);
        double d23 = dis(x2,y2,x3,y3);
        double d31 = dis(x3 ,y3,x1,y1);

        if(check(d12,d23,d31,r)){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}