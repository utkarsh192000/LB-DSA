#include <bits/stdc++.h>
using namespace std;

int power(int k)
{
    if (k == 0)
    {
        return 1;
    }

    return 2 * power(k - 1);
}

int main()
{

    int k;
    cin >> k;

    int ans = power(k);
    cout << ans;

    return 0;
}