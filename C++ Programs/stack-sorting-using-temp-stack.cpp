#include <iostream>
#include <stack>
using namespace std;

stack<int> sortUsingTemp(stack<int> &st1)
{
    stack<int> st2;

    while (!st1.empty())
    {
        int temp = st1.top();
        st1.pop();

        while(!st2.empty() && st2.top() > temp){

            st1.push(st2.top());
            st2.pop();
        }

        st2.push(temp);
    }

    return st2;
   
}

int main()
{

    stack<int> st1;
    int arr[6] = {2, 8, 3, 4, 6, 1};

    for (int i = 0; i < 6; i++)
    {
        st1.push(arr[i]);
    }
    

    stack<int> st2 = sortUsingTemp(st1);

     while (!st2.empty())
    {
        cout << st2.top() << " ";
        st2.pop();
    }

    return 0;
}