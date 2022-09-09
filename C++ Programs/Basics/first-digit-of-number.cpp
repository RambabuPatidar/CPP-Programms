#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<" Enter the number ";
    cin>>num;
    do
    {
        cout<<num<<endl;

    }
    while(num==0);
    {
        num-=1;
        cout<<num;
    }
    return 0;
}

