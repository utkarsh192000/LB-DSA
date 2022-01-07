#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int row = matrix.size();
    int col = matrix[0].size();
    int i = 0;
    int j = col - 1;
    while (i < row && j >= 0)
    {
        if (matrix[i][j] == target)
        {
            return true;
        }
        else if (matrix[i][j] < target)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return false;
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

    int target;
    cin >> target;

    cout << searchMatrix(v, target) << endl;

    return 0;

    /*
    => T.C :
        O(log(row*col)) : because as we know the T.C of BinarySearch In linear array is O(n) , where 'n' is total
                        element in array but here we have total row*col elements

    */