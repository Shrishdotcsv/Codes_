#include<iostream>
using namespace std;
int main()
{
    // //printing number upto 100 excluding divisible of 3
    // for(int i = 1; i <= 100; i++)
    // {
    //     if(i % 3 == 0)
    //     {
    //         continue;
    //     }
    //     cout<<i<<" ";
    // }

    //PRIME OR NOT
    // int num;
    // cout<<"enter num..";
    // cin>>num;
    // int i;
    // for( i = 2 ; i<num;i++)
    // {
    //     if(num%i == 0)
    //     {
    //         cout<<"Non-Prime"<<endl;
    //         break;
    //     }
    // }

    // if(i == num)
    // {
    //     cout<<"Prime"<<endl;
    // }

    // PRIME NUMBER BETWEEN TWO NUMBERS
    int a,b;
    cout<<"enter two numbers..";
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        int j;
        for(j=2;j<i;j++)
        {
            if(i%j == 0)
            {
                break;
            }
        }
        if(j == i)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}