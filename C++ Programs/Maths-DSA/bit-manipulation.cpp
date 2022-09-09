#include <iostream>
using namespace std;

int getbit(int n, int pos)
{
    return (((1 << pos) & (n)) != 0);
}
int setbit(int n, int pos)
{
    return ((1 << pos) | (n));
}
int clear(int n, int pos)
{
    int mask = ~(1 << pos);
    return ((mask) & (n));
}
int updatebit(int n, int pos, int value)
{
    int mask = ~(1 << pos);
    n = ((mask) & (n));
    return (n | (value << pos));
}

int main()
{

    //    cout<<getbit(5,2);
    //    cout<<setbit( 5,1);
    //    cout<<clear( 5,2 );
    cout << updatebit(5, 1, 1);
    return 0;
}