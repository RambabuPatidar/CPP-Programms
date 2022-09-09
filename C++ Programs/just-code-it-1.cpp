// /*

// #include <bits/stdc++.h>

// using namespace std;

// class Student
// {
// private:
//     // memeber variables
//     int data;
//     string name;
//     float marks;

//     // member functions(Methods)
// public:
    
//     void setDataStu();
//     friend void display(Student stu);

// };
// void Student:: setDataStu() {
//     data = 100;
//     name = "Rambabu Patidar";
//     marks = 5.00f;
// }
// void display(Student stu)
// {
//     cout << stu.data << endl;
//     cout << stu.name << endl;
//     cout << stu.marks << endl;
// }


// class Teacher{
//     string name;
//     string subject;
//     int year;

//     public:

//     void setData();
//     // making a function friend to this class so that it can access the private member of the class;
//     friend void displayExperience(Teacher teacher);

//     friend void Student :: setDataStu();



// };
// void Teacher::setData() {
//     name = "Teachers Name";
//     subject = "Teaching subject";
//     year = 12;

// }
// void displayExperience(Teacher teacher) {
//     cout << teacher.name;
//     cout << endl << teacher.subject;
//     cout << endl << teacher.year << endl;
// }

// int main()
// {

//     Teacher teacher;
//     teacher.setData();
//     displayExperience(teacher);
    
//     Student stu;
//     stu.setDataStu();
//     display(stu);
//     return 0;
// }

// ---------------------------------------------------------------------------------------

// */

// /*

// #include<iostream>
// using namespace std;

// class A{
//     public:
//     int a = 0;
// };

// int main() {

//     A objA;
//     // A::*  this means pointer to member of A class
//     // &A:: a this means address of the a member of A class
//     int A:: *ptrA = &A:: a;


//     // this is how we access the value using the dereferencing .* operator .
//     // when we have object and a pointer to member of class XYZ
//     cout << objA.*ptrA << endl;


//     // A * objPtr is the pointer to the object of class A and &objA is the address of the objects
//     A *objPtr = &objA;


//     // ->* this is also dereferencing operator when we use pointer to both object and member. 
//     // when we have pointer of object and pointer to member of the object of class XYZ 
//     cout << objPtr ->*ptrA << endl;

//     return 0;
// }

// ----------------------------------------------------------------------------------
// */

// // addition using the member to pointer and dereferencing operators

// #include<iostream>
// using namespace std;

// class A{
//     int x ;
//     int y ;

//     public:

//     void setData(int x, int y) {
//         this->x = x;
//         this->y = y;
//     }

//     friend int sum_X_Y(A a);
// };

// int sum_X_Y(A a) {
//     int A:: *px = &A::x;
//     int A:: *py = &A::y;

//     A *objPtr = &a;

//     int sum = a.*px /* accesssing with object and pointer to the member of class A */ 
//              + objPtr ->*py /* accessing with pointer to object and pointer to the member of class A */  ;

//     return sum;
// }

// int main(){

//     A a;

//     void (A :: *ptrFunc) (int, int) = &A :: setData;

//     (a.*ptrFunc)(10, 20);
//     cout << "The sum of 10 and 20 is : " << sum_X_Y(a) << endl;

//     A* objPtr = &a;
    
//     (objPtr->*ptrFunc)(100, 100);
//     cout << "The sum of 100 and 100 is : " << sum_X_Y(a);
    
//     return 0;
// }




// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;
 
// adjacency matrix
vector<vector<int> > adj;
 
// function to add edge to the graph
void addEdge(int x, int y)
{
    adj[x][y] = 1;
    adj[y][x] = 1;
}
 
// function to perform DFS on the graph
void dfs(int start, vector<bool>& visited)
{
 
    // Print the current node
    cout << start << " ";
 
    // Set current node as visited
    visited[start] = true;
 
    // For every node of the graph
    for (int i = 0; i < adj[start].size(); i++) {
 
        // If some node is adjacent to the current node
        // and it has not already been visited
        if (adj[start][i] == 1 && (!visited[i])) {
            dfs(i, visited);
        }
    }
}
 
int main()
{
    // number of vertices
    int v = 5;
 
    // number of edges
    int e = 4;
 
    // adjacency matrix
    adj = vector<vector<int> >(v, vector<int>(v, 0));
 
    addEdge(0, 1);
    addEdge(0, 2);
    addEdge(0, 3);
    addEdge(0, 4);
 
    // Visited vector to so that
    // a vertex is not visited more than once
    // Initializing the vector to false as no
    // vertex is visited at the beginning
    vector<bool> visited(v, false);
 
    // Perform DFS
    dfs(0, visited);
}