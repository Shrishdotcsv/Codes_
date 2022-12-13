#include<iostream>
using namespace std;
char next_alpha(char arr[] , int n , char x){
    int s = 0;
    int e = n-1;
    char ans = 'a';

    while (s<=e)
    {
        int m = s+ (e-s)/2;
        if(arr[m] == x){
            s = m+1;
        }
        else if(arr[m]>x)
        {
            ans = m;
            e = m-1;
        }
        else
        {
            s=m+1;
        }
    }
    return arr[ans];
    
}
int main(){
    char ch[] = {'a','f','g','h','l'};
    int n = 5;
    char res =  next_alpha(ch,5,'l');
    cout<<res<<endl;

}