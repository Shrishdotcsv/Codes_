#include<iostream>
using namespace std;
int main()
{ 
    .................For Loop.................
    int  n;
    cin>>n;
    
    int sum = 0;
    for(int i = 1 ; i <= n ; i++)
    {
        sum = sum + i;
    }

    cout<<sum<<endl;

    ..................While Loop...............
    int n;
    cout<<"Enter number.. ";
    cin>>n;

    int sum = 0;
    int i=1;
    while(i <= n)
    {
        sum = sum + i;
        i++;
    }
    cout<<sum<<endl;


    ....................Do-while loop............
    int n;
    cout<<"enter number.."<<endl;
    cin>>n;

    do
    {
        cout<<n<<endl;
        cin>>n;
    }while(n>0);
    return 0;

}
    