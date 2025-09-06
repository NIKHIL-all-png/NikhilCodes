#include <iostream>
#include <stack>
#include <vector>
using namespace std;
// class Stack
// {
//     // properties
// public:
//     int *arr;
//     int top;
//     int size;
//     Stack(int size)
//     {
//         this->size = size;
//         arr = new int[size];
//         top = -1;
//     }
//     void push(char element)
//     {
//         if (size - top > 1)
//         {
//             top++;
//             arr[top] = element;
//         }
//         else
//         {
//             cout << " stack overflow" << endl;
//         }
//     }
//     void pop()
//     {
//         if (top >= 0)
//         {
//             top--;
//         }
//         else
//         {
//             cout << "stack underflow" << endl;
//         }
//     }
//     int peak()
//     {
//         if (top >= 0)
//         {
//             return arr[top];
//         }
//         else
//         {
//             cout << "empty";
//             return -1;
//         }
//     }
//     bool isempty()
//     {
//         if (top == -1)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
// };

bool chec(stack<char> &s, string &str)
{
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        // if opening bracket then stack push
        // if clode bracet ,sta     ck.top and check
        if (ch == '(' || ch == '[' || ch == '{')
        {
            s.push(ch);
        }
        else
        {
            // for closing bracket
            if (!s.empty())
            {
                char top = s.top();
                if ((ch == ')' && top == '(') || (ch == '}' && top == '{') || (ch == ']' && top== '['))
                {
                    s.pop();
                }
                else
                {

                    return false;
                }
            }
            else
            {

                false;
            }
        }
    }
    if (s.empty())
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
    string str;
    str.push_back('{');
    str.push_back('[');
    str.push_back('(');
    str.push_back(')');
    str.push_back(']');
    str.push_back('}');
    stack<char> s;
    int p = chec(s, str);
    if (p == 1)
    {
        cout << "yes";
    }
    else
    {
        cout << "No";
    }
}