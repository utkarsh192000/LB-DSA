#include <bits/stdc++.h>
using namespace std;

void rowSum(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        int tot = 0;
        for (int j = 0; j < col; j++)
        {
            tot += arr[i][j];
        }
        cout << tot << " ";
    }
}

void columnSum(int arr[][3],int row,int col){
    for (int i = 0; i < col; i++)
    {
        int tot = 0;
        for (int j = 0; j < row; j++)
        {
            tot += arr[j][i];
        }
        cout << tot << " ";
    }
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

    cout<<endl;
    rowSum(arr,3,3);
    cout<<endl;
    columnSum(arr,3,3);



    return 0;
}




/*


We need to specify the atleast column while making a function


*/