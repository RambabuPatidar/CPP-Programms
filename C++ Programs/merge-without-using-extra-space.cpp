#include<bits/stdc++.h>
#include<iostream>
using namespace std;

vector<int> mergeTwoSorted(vector<int> &v1, vector<int> &v2 ) {
    int i=0; 
    int j = 0;
   while( i <v1.size()) {
       if(v1[i] <= v2[0]) {

           i++;
       }
       else{ 
           
           int temp  = v1[i];
           v1[i] = v2[0];
           v2[0] = temp;
           i++;
           sort(v2.begin(), v2.end());
       }
   }
   while(j < v2.size() ) {
       v1.push_back(v2[j++]);

   }
   return v1;

}

int main(){

    vector<int > v1;
    vector<int> v2;
    cout << "enter the value of n1 and n2 : ";
    int n1, n2;
    cin >> n1 >> n2;
    cout << "enter the first " << n1 << " element" << endl;
    for(int i=0; i<n1;i++) {
        int a ; cin >> a;
        v1.push_back(a);
    }
    cout << "enter the second " << n2<< " element" << endl;
    for(int i=0; i<n2;i++) {
        int a ; cin >> a;
        v2.push_back(a);
    }

   vector<int > v =  mergeTwoSorted(v1, v2);

  for(int i=0; i<v.size(); i++) {
      cout << v[i] << " ";
  }
    return 0;
}