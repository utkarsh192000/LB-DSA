#include<bits/stdc++.h>
using namespace std;


vector<int>wavePrint(vector<vector<int>>arr,int row,int col){
    vector<int>ans;
    for(int i=0;i<col;i++){
        if(i%2==0){
            for(int j=0;j<row;j++){
            ans.push_back(arr[j][i]);
        }
        }
        else{
            for(int j=row-1;j>=0;j--){
            ans.push_back(arr[j][i]);
        }
        }
        
    }
    return ans;
}

void print(vector<int>arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" "; 
    }
    cout<<endl;
}

int main(){

    int row,col;
    cin>>row>>col;
    vector<vector<int>>v;

    for(int i=0;i<row;i++){
        vector<int>temp;
        for(int j=0;j<col;j++){
            int val;
            cin>>val;
            temp.push_back(val);
        }
        v.push_back(temp);
    }

    vector<int>ans=wavePrint(v,row,col);
    print(ans);
    return 0;
}



/*

=> T.C :
    O(m*n) === O(n^2) -> as we visited each element of matrix 1 time ; total element row*col in matrix 


*/