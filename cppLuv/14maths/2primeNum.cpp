// leetcode question(count primes) tle solution even after using sqrt(n)
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n == 2)
    {
        return 1;
    }
    else if (n < 2)
    {
        return 0;
    }
    else
    {
        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i)
            {
                continue;
            }
            else
            {
                return 0;
            }
        }
        return 1;
    }
}

int countPrimes(int n)
{
    int count = 0;
    for (int i = 2; i < n; i++)
    {
        if (isPrime(i))
        {
            count++;
            
        }
    }
    return count;
}
int main()
{
    int n;
    cin >> n;
    cout << endl<<countPrimes(n);
    return 0;
}