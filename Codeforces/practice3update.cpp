// SreeKajol
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string num;
        cin >> num;
        reverse(num.begin(), num.end());

        vector<int> ans;

        for (int i = 0; i < num.size(); i++)
        {
            int d = num[i] - '0';
            if (d != 0)
            {
                ans.push_back(d * pow(10, i));
            }
        }
        cout << ans.size() << endl;
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
