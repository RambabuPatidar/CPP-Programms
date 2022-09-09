#include<iostream>
using namespace std;
#include<list> 

class Hash{
    int n;
    list<int> *table;
    
    public:
    Hash(int size);

    int calculateMap(int val) { // mapping the has values 
        return val%n;
    }

    void insertInTable(int val) ;// inerting data in hash table

    void displayHash();  // print the hash table

    void deleteInHash(int key ) ; 
    
};

Hash:: Hash(int val){ 
    n = val;
    this->table = new list<int>[n];
}

inline void Hash::insertInTable(int val) {
      int index = calculateMap(val);
        table[index].push_back(val);
}

void Hash::displayHash() {
    for(int i=0; i<n ;i++) {
            cout << i;
            for(auto i: table[i]) {
                cout << "-->" << i ;
            }
            cout<< endl;

        }
}

void Hash:: deleteInHash(int key) {
    int index = calculateMap(key);

    list<int> ::iterator it;
    for(it = table[index].begin(); it!= table[index].end(); it++) {
        if( *it == key) {
            break;
        }
    }

    if( it != table[index].end()) {
        table[index].erase(it); 
    }
}

int main() {
    int arr[] = {1, 2, 23 ,28, 14, 5};
    Hash h(6);
    for(int i=0; i<6; i++) {
        h.insertInTable(arr[i]);
    }

    h.displayHash();
    h.deleteInHash(23);
    cout << endl;
    h.displayHash();
    return 0;
}