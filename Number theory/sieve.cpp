#include <bits/stdc++.h>
using namespace std;

const int N = 1e7 + 10;
vector<int> PrimeNumber;
vector<bool> prime(N + 1, true);

void sieve()
{

    prime[0] = prime[1] = false;

    for (int i = 2; i < N; i++)
    {
        if (prime[i])
        {
            for (int j = i * 2; j < N; j += i)
            {
                prime[j] = false;
            }
        }
    }
    for (int i = 0; i <= N; i++)
    {
        if (prime[i])
            PrimeNumber.push_back(i);
    }
}
int main()
{
    sieve();

    int q;
    cin >> q;
    while (q--)
    {
        int n;
        cin >> n;
        if (prime[n])
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }

    return 0;
}