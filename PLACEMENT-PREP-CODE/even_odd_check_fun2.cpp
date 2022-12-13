#include<iostream>
using namespace std;
bool isEven(int num)
{
    if(num % 2 == 0)
    {
        return true;
    }

    return false;
}
int main()
{
    int num;
    cin>>num;

    cout<<isEven(num);
}