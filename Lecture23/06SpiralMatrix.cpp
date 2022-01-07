#include <bits/stdc++.h>
using namespace std;

vector<int> spiralPrint(vector < vector<int>> arr, int row, int col)
{

    int count = 0;
    int total = row * col;

    // index initialisaton
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row - 1;
    int endingCol = col - 1;

    vector<int> ans;

    while (count < total)
    {
        // print top horizontal row
        for (int i = startingCol; count < total && i <= endingCol; i++)
        {
            ans.push_back(arr[startingRow][i]);
            count++;
        }
        startingRow++;

        // print rightmost vertical column
        for (int i = startingRow; count < total && i <= endingRow; i++)
        {
            ans.push_back(arr[i][endingCol]);
            count++;
        }
        endingCol--;

        // print bottom horizontal row in reverse
        for (int i = endingCol; count < total && i >= startingCol; i--)
        {
            ans.push_back(arr[endingRow][i]);
            count++;
        }
        endingRow--;

        // print leftmost vertical column in reverse
        for (int i = endingRow; count < total && i >= startingRow; i--)
        {
            ans.push_back(arr[i][startingCol]);
            count++;
        }
        startingCol++;
    }

    return ans;
}

void print(vector<int>arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" "; 
    }
    cout<<endl;
}


int main()
{

    int row, col;
    cin >> row >> col;
    vector<vector<int>> v;

    for (int i = 0; i < row; i++)
    {
        vector<int> temp;
        for (int j = 0; j < col; j++)
        {
            int val;
            cin >> val;
            temp.push_back(val);
        }
        v.push_back(temp);
    }

    vector<int> ans = spiralPrint(v, row, col);
    print(ans);
    return 0;
}


/*

=> T.C:
    O(row*col) -> we traversed each element once 



*/