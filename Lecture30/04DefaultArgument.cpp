#include<bits/stdc++.h>
using namespace std;

void printAllElement(int arr[],int n,int start=0){
    for(int i=start;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){

    int size=5;
    int arr[5]={1,2,3,4,5};

    printAllElement(arr,size);
    // if no value is passed for start , it would take default value 
    // if the value would have been passed it would use it 
    // printAllElement(arr,size,1);

    return 0;
}