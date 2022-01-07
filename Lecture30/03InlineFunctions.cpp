#include <bits/stdc++.h>
using namespace std;

inline int getMax(int &a, int &b)
{
    return a > b ? a : b;
}
// made a inline function which will not take place in function stack , wherever this getMax()
//  will be written , it would be replced by it 

int main()
{

    int a = 10, b = 5;
    int ans;

    // simple if-else logic
    // if(a>b){
    //     ans=a;
    // }
    // else{
    //     ans=b;
    // }

    // using ternery operator
    // ans = a > b ? a : b;
    
    // using inline function 
    ans=getMax(a,b);

    cout << ans;
    return 0;
}