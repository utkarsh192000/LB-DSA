#include <bits/stdc++.h>
using namespace std;

int countPrimes(int n)
{
    int count = 0;
    vector<bool> prime(n + 1, true);

    prime[0] = prime[1] = false;

    for (int i = 2; i < n; i++)
    {
        if (prime[i] == true)
        {
            count++;
            for (int j = 2 * i; j < n; j = j + i)
            {
                prime[j] = false;
            }
        }
    }
    return count;
}

int main()
{

    int num;
    cin >> num;

    int ans = countPrimes(num);
    cout << ans;

    return 0;
}

/*

T.C :
    O(n*log(log n)) --> totat iteration = n/2 + n/3 + n/5 + n/7 ....
                                        = n * ( 1/2 + 1/3 + 1/5 + 1/7 ....)
                                        = n * (log(log n))





*/