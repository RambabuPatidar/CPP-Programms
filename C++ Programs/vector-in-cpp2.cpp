#include <iostream>
#include <vector>
using namespace std;
//GO AND READ AT GEEKS FOR GEEKS IF IT IS NOT UNDERSTANDABLE;
int main()
{

    vector<int> v;
    for (int i = 1; i <= 5; i++)
        v.push_back(i);

    for (auto i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    }

    cout << endl;
    for (auto i = v.cbegin(); i != v.cend(); ++i)
        cout << *i << " ";
    cout << endl;
    for (auto i = v.rbegin(); i != v.rend(); ++i)
        cout << *i << " ";
    cout << endl;
    for (auto i = v.crbegin(); i != v.crend(); i++)
        cout << *i << " ";
    cout << endl;
    cout << v.size() << endl;     // show the current size
    cout << v.max_size() << endl; // maximum element vector can store
    cout << v.capacity() << endl; // storage space
    v.resize(3);                  // resize the vector
    for (auto i = v.begin(); i != v.end(); i++)
        cout << *i << " ";
    cout << endl;
    cout << v.empty() << endl; // 1 if true and 0 if flase;

    vector<int> vv;
    vv.assign(6, 5);
    for (auto i = vv.begin(); i != vv.end(); i++)
        cout << *i << " ";
    cout << endl;
    vv.push_back(123);
    cout << vv[6] << endl;
    vv.pop_back();
    vv.insert(vv.begin(), 1);
    cout << v[0] << endl;
    vv.swap(v);
    cout << "vv vector values:" << endl;
    for (auto i = vv.begin(); i != vv.end(); i++)
        cout << *i << " ";
    cout << " \n v vector values are :" << endl;
    for (auto i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    v = vv;
    for (auto element : v)
    {
        cout << element << " ";
    }
    return 0;
}