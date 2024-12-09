// SreeKajol
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, rem, k = 0;
        cin >> n;
        int arr[10000];

        if (n >= 1000)
        {
            rem = n % 1000;
            arr[k++] = n - rem;
            n %= 1000;
        }
        if (n >= 100)
        {
            rem = n % 100;
            arr[k++] = n - rem;
            n %= 100;
        }
        if (n >= 10)
        {
            rem = n % 10;
            arr[k++] = n - rem;
            n %= 10;
        }
        if (n > 0 && n < 10)
        {
            arr[k++] = n;
        }

        vector<int> value;
        for (int i = 0; i < k; i++)
        {
            value.push_back(arr[i]);
        }
        cout << value.size() << "\n";

        for (int i = 0; i < value.size(); i++)
        {
            cout << value[i] << " ";
        }
    }
    return 0;
}
