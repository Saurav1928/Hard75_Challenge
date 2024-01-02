#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> d(n);
    for (int i = 0; i < n; i++)
        cin >> d[i];
    vector<int> a(n);
    a[0] = d[0];
    bool flg = true;
    for (int i = 1; i < n; i++)
    {
        if (d[i] == 0)
        {
            a[i] = a[i - 1];
            continue;
        }
        int tmp1 = d[i] + a[i - 1];
        int tmp2 = a[i - 1] - d[i];
        // cout<<tmp1<<" "<<tmp2<<endl;
        if (tmp1 >= 0 and tmp2 >= 0)
        {
            if (tmp1 == 0 and tmp2 == 0)
                a[i] = 0;
            else
            {
                flg = false;
                break;
            }
        }
        a[i] = max(tmp1, tmp2);
    }
    if (flg == false)
        cout << -1 << endl;
    else
    {
        for (auto it : a)
            cout << it << " ";
        cout << endl;
    }
}
int main()
{

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}