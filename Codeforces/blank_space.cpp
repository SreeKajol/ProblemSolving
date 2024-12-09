#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int maxi = 0, cnt = 0, value;
        for (int i = 0; i < n; i++)
        {
            cin >> value;
            if (value)
            {
                cnt = 0;
            }
            else
                cnt++;
            maxi = max(cnt, maxi);
        }

        cout << maxi << "\n";
    }

    return 0;
}
