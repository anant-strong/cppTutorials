// leetcode question(count primes) using seive of eratosthenes
#include <bits/stdc++.h>
using namespace std;

int countPrimes(int n)
{
    int count = 0;

    vector<bool> v(n + 1, true);
    //making 0 and 1 nonprime
    v[0] = v[1] = false;

    for (int i = 2; i < n; i++)
    {

        if (v[i])
        {
            count++;

            //making every(divisor of currentno.) number nonprime 
            for (int j = 2 * i; j < n; j += i)
            {
                v[j] = false;
            }
        }
    }
    return count;
}
int main()
{
    int n;
    cin >> n;

    cout << countPrimes(n);
    return 0;
}