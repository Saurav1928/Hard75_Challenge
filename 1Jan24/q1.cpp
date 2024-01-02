#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int sum = 0, tmp = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    sort(v.begin(), v.end());
    int reqd = sum / 2 ;
    int ans = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        ans++;
        tmp += v[i];
        if (tmp > reqd)
            break;
    }
    cout << ans << endl;
}
int main()
{
    solve();
    return 0;
}