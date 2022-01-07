#include <bits/stdc++.h>
using namespace std;

int largestRowSum(int arr[][3],int row,int col){
    int maxSum=INT_MIN;
    int rowIndex=-1;
    for (int i = 0; i < row; i++)
    {
        int tot = 0;
        for (int j = 0; j < col; j++)
        {
            tot += arr[i][j];
        }
        if(tot>maxSum){
            maxSum=tot;
            rowIndex=i;
        }
    }
    return rowIndex;

}


int main()
{

    int arr[3][3];

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin >> arr[row][col];
        }
    }

    cout<<largestRowSum(arr,3,3);


    return 0;
}




/*


We need to specify the atleast column while making a function


*/