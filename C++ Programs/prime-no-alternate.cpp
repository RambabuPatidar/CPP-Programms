#include <iostream>
using namespace std;

int main()
{

    int number, i = 2,result;
    cout << "input an number to check wether its a prime number or not";
    cin >> number;

    while (number % i != 0)
    {    i++;  }
   ( number==i)?cout<<"prime" :cout<<"non prime";

    return 0; 
}