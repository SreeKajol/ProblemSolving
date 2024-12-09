
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int count = 0;
        int l = s.size();
        for (int i = 1; i < l; i++)
        {
            if (s[0] == s[i])
            {
                count++;
            }
        }
        if (count + 1 == l)
        {
            cout << -1 << "\n";
        }
        else
            cout << l - 1 << "\n";
    }

    return 0;
}
