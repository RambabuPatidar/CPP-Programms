#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int count  = 0;

        while (n != 0)
        {
             int k = 1;
            while (!(n >= k * k and n < (k + 1) * (k + 1)))
            {
                k++;
            }
            // cout << k<<" ";
            count++;
            n = n - k * k;
            
        }
        cout<<count<<endl;
    }
    return 0;
}
