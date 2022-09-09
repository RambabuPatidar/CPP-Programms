#include <iostream>
using namespace std;

bool check(bool c1,bool c2 ,bool c3){
    if( c1){
        if(c2){
            return 0;
        }
        else{
            if(c3){
                return 0;
            }
            else{
                return 1;
            }
        }
    }
    else{
        if( c2){
            if(c3){
                return 0;
            }
            else{
                return 1;
            }
        }
        else{
            if( c3){
                return 1;
            }
            else{
                return 0;
            }
            
        }
    }
}

void gradeAward(float hrd , float cc, float ts){
    bool c1, c2, c3;
    c1=c2=c3 = false;
    if( hrd> 50){
        c1=true;
    }
    if(cc<0.7){
        c2= true;
    }
    if( ts>5600){
        c3= true;
    }
    
    if(c1 and c2 and c3){
        cout<<"10"<<endl;
    }
    else if(c1 and c2){
        cout<<"9"<<endl;
    }
    else if( c2 and c3){
        cout<<"8"<<endl;
    }
    else if(c1 and c3){
        cout<<"7"<<endl;
    }
    else if(!(c1 || c2 || c3)){
        cout<<"5"<<endl;
    }
    else if(check(c1,c2,c3)){
        cout<<"6"<<endl;
    }
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    float hrd, cc, ts;
	    cin>>hrd>>cc>>ts;
	    gradeAward(hrd, cc, ts);
	}
	return 0;
}


