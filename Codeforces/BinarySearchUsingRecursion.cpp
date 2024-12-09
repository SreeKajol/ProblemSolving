#include <bits/stdc++.h>
using namespace std;

int Bin_search(int a[], int l, int r, int x)
{
    if (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (a[mid] == x)
        {
            return mid;
        }
        else if (a[mid] < x)
        {
            return Bin_search(a, mid + 1, r, x);
        }
        else
        {
            return Bin_search(a, l, mid - 1, x);
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;

    int arr[n + 3];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int p;
    cin >> p;

    int index = Bin_search(arr, 0, n - 1, p);
    cout << index << "\n";

    return 0;
}
