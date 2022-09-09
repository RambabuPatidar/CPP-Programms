#include <iostream>
using namespace std;

int main()
{

    int a, b;
    cin >> a >> b;
    int array[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> array[i][j];
        }
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;

    }

    int x;
    cout<<"what you want to search in these matrix;"<<endl;
    cin>>x;
    int i;
    int j;
    for(  i=0;i<a;i++){
        for( j=0;j<b;j++){
            if ( array[i][j]==x){
                cout<<" yes this element is present in this matrix";
            }
            
        }
    }
    if ( i==a&&j==b){
        cout<<"sorry ";
    }
    return 0;
}