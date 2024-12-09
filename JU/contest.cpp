//.... SreeKajol_World

#include <iostream>
#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
#define ll long long
#define scan(v)        \
    for (auto &it : v) \
        cin >> it;
#define print(v)            \
    for (auto it : v)       \
        cout << it << "\n"; \
    cout << endl;
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define TC    \
    int t;    \
    cin >> t; \
    while (t--)

int main()
{
    FIO;
    TC
    {
        int n;
        cin >> n;
        bool flag = true;
        if (n % 2 == 0 && n != 2 ) 
        {
            flag = false;
        }
        for (int i = 3; i*i<=n ; i += 2)
        {
            if (n % i == 0)
            {
                flag = false;
                break;
            }
        }

        if (flag == true && n!=1)
        {
            cout << "yes\n";
        }
        else
            cout << "no\n";
    }
    return 0;
}
