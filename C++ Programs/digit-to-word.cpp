#include <iostream>
using namespace std;

int main()
{

    int n, lastdigi, count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0, count6 = 0, count7 = 0, count8 = 0, count9 = 0, count0 = 0;
    cin >> n;
    int reverse =0;
    int tempN=n;
    while( n>0){
        int lastdigi =n%10;
        reverse = reverse*10 +lastdigi;
        n/=10;
    }
    while (reverse > 0)
    {
        lastdigi = reverse % 10;
        switch (lastdigi)
        {
        case 0:
            cout<<"zero"<<endl ;
            break;
        case 1:
            cout<<"one"<<endl ;
            break;
        case 2:
            cout<<"two"<<endl ;
            break;
        case 3:
            cout<<"three"<<endl ;
            break;
        case 4:
            cout<<"four"<<endl ;
            break;
        case 5:
            cout<<"five"<<endl ;
            break;
        case 6:
            cout<<"six"<<endl ;
            break;
        case 7:
            cout<<"seven"<<endl ;
            break;
        case 8:
            cout<<"eight"<<endl;
            break;
        case 9:
            cout<<"nine"<<endl;
            break;

        default:
            break;
        }
        reverse /= 10;
    }
   
    return 0;
}