#include <bits/stdc++.h>
using namespace std;

long long BS(long long d, vector<long long> &x)
{
    long long s = 0, e = x.size() - 1, mid, ans = -1;
    while (s <= e)
    {
        mid = s + (e - s) / 2;
        if (x[mid] <= d)
        {
            ans = mid;
            s = mid + 1;
        }
        else
            e = mid - 1;
    }
    return ans + 1;
}
void solve()
{
    long long n;
    cin >> n;
    vector<long long> x(n);
    for (int i = 0; i < n; i++)
        cin >> x[i];
    int q;
    cin >> q;
    sort(x.begin(), x.end());
    while (q--)
    {
        long long d;
        cin >> d;
        long long ans = BS(d, x);
        cout << ans << endl;
    }
}

int main()
{
    solve();
    return 0;
}