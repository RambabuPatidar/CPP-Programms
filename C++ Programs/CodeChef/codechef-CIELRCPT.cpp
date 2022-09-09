#include <iostream>
using namespace std;

int main()
{

    int arr[12] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048};
    int t;
    cin >> t;
    while (t > 0)
    {

        int p;
        cin >> p;
        int realP = p;
        int sum = 0;
        int count = 0;

        if (p <= 2048)
        {

            do
            {
                int i = 0;
                while (!(p >= arr[i] and p < arr[i + 1]))
                {

                    i++;
                    if (i > 11)
                    {
                        break;
                    }
                }

                sum += arr[i];
                p = p - arr[i];
                count++;
            } while (sum != realP);

            cout << count << endl;
        }
        else
        {

            while (p > 2048)
            {
                p = p - 2048;
                sum += 2048;
                count++;
            }

            do
            {
                int i = 0;
                while (!(p >= arr[i] and p < arr[i + 1]))
                {

                    i++;
                    if (i > 11)
                    {
                        break;
                    }
                }

                sum += arr[i];
                p = p - arr[i];
                count++;
            } while (sum != realP);

            cout << count << endl;
        }
    }

    return 0;
}