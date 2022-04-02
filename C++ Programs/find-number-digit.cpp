#include <iostream>
using namespace std;

int main()
{
   int num, digit;
   cout << "enter a number to find its number of digit?";
   cin >> num;
   for (digit = 0; num > 0; digit++)
   {
      num /= 10;
   }
   cout << digit;

   return 0;
}