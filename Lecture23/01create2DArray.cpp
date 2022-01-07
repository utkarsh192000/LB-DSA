#include<bits/stdc++.h>
using namespace std;

int main(){

    // create a 2-d input array with all initial value equal to 0

    int arr[3][4];
    
    // take input for each cell in matrix  
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }

    // print 2-D array output 
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}