

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0, avg, count = 0;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }
        avg = sum / n;
        for (int i = 0; i < n; i++)
        {
            if (avg < arr[i])
            {
                ++count;
            }
        }
        cout << count << "\n";
    }
    return 0;
}
