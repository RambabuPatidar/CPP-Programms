#include <iostream>
using namespace std;

bool pythagorean(int x, int y, int z)
{
    int a, b, c;
    int maximum = max(x, max(y, z));
    if (maximum == x)
    {
        a = x;
        b = y;
        c = z;
    }
    else if (maximum == y)
    {
        a = y;
        b = x;
        c = z;
    }
    else
    {
        a = z;
        b = y;
        c = x;
    }
    if (a * a == (b * b) + (c * c))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    int x, y, z;
    cin >> x >> y >> z;
    if (pythagorean(x, y, z))
    {
        cout << " pythagorean triplet";
    }
    else
    {
        cout << " not an pythagorean triplet ";
    }
    return 0;
}