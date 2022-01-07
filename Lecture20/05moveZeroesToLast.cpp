#include <bits/stdc++.h>
using namespace std;

void pushZerosAtEnd(vector<int> &arr)
{
    int j = 0;

    for (int i = 0; i < arr.size(); i++)

    {

        if (arr[i] != 0)

        {

            swap(arr[i], arr[j]);

            j++;
        }
    }
}

void print(vector<int> &arr)
{
    for (int x : arr)
    {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            arr.push_back(val);
        }
        pushZerosAtEnd(arr);
        print(arr);
    }

    return 0;
}
