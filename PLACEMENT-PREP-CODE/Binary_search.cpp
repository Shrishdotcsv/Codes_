#include<iostream>
using namespace std;

int BinarySearch(int arr[] , int n , int key)
{
    int Start = 0;
    int End = n-1;

    int Mid = Start + (End - Start) /2;

    while (Start <= End)
    {
        if(arr[Mid] == key )
        {
            return Mid;
        }
        else if(arr[Mid] > key)
        {
            End = Mid -1;
        }

        else
        {
            Start = Mid + 1;
        }

        Mid = Start + (End - Start)/2;
    }
    return -1;

}
int main()
{
    int Even[6] = { 2,4,6,8,10,12 };
    int Odd[7] = { 1,3,5,7,9,11,13 };

    int index = BinarySearch(Odd , 7 , 13);
    cout<<"Index of 13 is : "<<index<<endl;


}