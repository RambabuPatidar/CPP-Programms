#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;

int main() {

    char name[100];
    ifstream fin1, fin2;
    fin1.open("country");
    fin2.open("favourites");

    for(int i =0; i<3; i++) {
        if( fin1.eof() != 0) {
            cout << "exit from country " << endl;
            exit(1);
        }
        fin1.getline(name, 100);
        cout << "favourites  of " << name << " :";

        if( fin2.eof() != 0) {
            cout << "exit from favourites " << endl;
            exit(2);
        }
        fin2.getline(name, 100);
        cout << name << endl;
    }
    
    return 0;
}