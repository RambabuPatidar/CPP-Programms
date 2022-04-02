#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

//PROGRAMM TO CONVERT STRING TO UPPERCASE by predefined functions
string toUpper( string s1){
    transform(s1.begin(), s1.end(), s1.begin(), ::toupper); 
     return s1;
}

// TO CONVERT THE STRING IN LOWERCASE by predefined function s

string toLower(string s2){
    transform(s2.begin(),s2.end(),s2.begin(),::tolower);
    return s2;
}

//to convert the string from lowercase to upparcase without using the predefined
//functions

void  toUpperWithoutPredefined(string s3){
     
    for( int i=0; i<s3.length();i++){
        int asciiValueLower =s3[i];
        int asciiValueUpper = asciiValueLower -32;
      
    char toUppervalue = asciiValueUpper;
    cout<<toUppervalue;
    }
      
}

int main(){

    string s1={"kdalksdjadgkaalldjkaf"};
    string s2={"LKSDLKJGAVLKSJDAKJDG"};
    string s3= {"rambabupatidarisagoodboy"};
   cout<< toUpper(s1)<<endl;
   cout<<toLower(s2)<<endl;
   toUpperWithoutPredefined(s3);
    return 0;
}