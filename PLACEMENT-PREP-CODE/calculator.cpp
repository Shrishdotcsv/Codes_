#include<iostream>
using namespace std;
int main()
{
    int x = 5;
    int y = 3;

    char op;
    cin>>op;
    switch (op)
    {
    case '+':
        cout<<x+y<<endl;
        break;
    case '-':
        cout<<x-y<<endl;
        break;
    case '*':
        cout<<x*y<<endl;
        break;
    case '/':
        cout<<x/y<<endl;
        break;
    case '%':
        cout<<x%y<<endl;
        break;
    default:
        cout<<"enter operator correctly.."<<endl;
        break;
    }
}