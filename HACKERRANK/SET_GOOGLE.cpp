//1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9
//10
//11
//12
//13
//14
//15
//16
//17
//18
//19
//20
//21
//22
//23
//24
//25
//26
//27
//28
//29
//30
//31
//32
//33
//34
//35
//36
//37
//38
//39
//40
//41
//42
//43
//44
//45
//46
////Sets-STL in C++ - Hacker Rank Solution
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    /* Sets-STL in C++ - Hacker Rank Solution START */
    set <int> s;
    int N = 0, i;
    cin >> N;
    for (i = 0; i < N; i++)
    {
        int q = 0, x = 0;
        cin >> q;
        cin >> x;
        if (q == 1)
        {
            s.insert(x);
        }
        else if (q == 2)
        {
            s.erase(x);
        }
        else
        {
            set<int>::iterator itr=s.find(x);
            if (itr == s.end())
            {
                cout<<"No"<<endl;
            }
            else
            {
                cout<<"Yes"<<endl;
            }
        }
    }
    /* Sets-STL in C++ - Hacker Rank Solution END */ 
    return 0;
}
