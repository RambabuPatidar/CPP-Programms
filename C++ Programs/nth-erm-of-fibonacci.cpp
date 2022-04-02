char nthFibonacciDigit(long long int n) {
        // code here
        int t1=0;
        int t2=1;
        int fibb=0;
        if ( n==1){
            cout<<"1";
      }
      else{
          while( n--){
              fibb=t1+t2;
             if( n==1){
                  cout<<fibb;
             }
            
             t1=t2;
             t2=fibb;
            }
          }
        
    }