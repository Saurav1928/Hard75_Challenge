#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    int cnt = 0;
    for (ll i = 0; i < n; i++)
    {
        ll d;
        cin >> d;
        if (d < 0)
            cnt++;
        v[i] = abs(d);
    }
    sort(v.begin(), v.end());
    cnt = (cnt % 2);
    ll sum = 0;
    // cout << "cnt:" << cnt << endl;
    for (ll i = 0; i < n; i++)
    {
        if (i < cnt)
            sum -= v[i];
        else
            sum += v[i];
    }
    cout << sum << endl;
}
int main()
{

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}