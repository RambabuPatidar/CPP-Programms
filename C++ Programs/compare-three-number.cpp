#include <iostream>
using namespace std;

int main()
{
  int a, b, c;

  cout << "we here find out the  largest of three number ?";
  cout << "Enter the number a";
  cin >> a;
  cout << "Enter the number b";
  cin >> b;
  cout << "Enter the number c";
  cin >> c;
  if (a > b)
  {
    if (a > c)
    {
      cout << " a=" << a << "is the largest number";
    }
    else
    {
      cout << " c =" << c << " is the greatest number ";
    }
  }
  else
  {
    if (c > b)
    {
      cout << " c=" << c << "is the greatest number ";
    }
    else
    {
      cout << "b=" << b << " is the greatest number ";
    }
  }

  return 0;
}