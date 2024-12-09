#include <bits/stdc++.h>
using namespace std;
#define int long long

int n;
vector<int> arr(n);

bool good(int m, int x)
{
    return (arr[m] <= x);
}

signed main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        int l = 0, r = n - 1;
        while (l + 1 < r)
        {
            int mid = l + (r - l) / 2;
            if (good(mid, x))
                l = mid;
            else
                r = mid;
        }
        cout << r << "\n";
    }
    return 0;
}