#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a = 0, b = 0, c = 0, d = 0;
    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        a += (data == 1);
        b += (data == 2);
        c += (data == 3);
        d += (data == 4);
    }
    int ans = 0;
    if (d != 0)
        ans += d;
    if (c != 0)
    {
        ans += c;
        if (a > 0)
            a -= c;
    }
    if (b != 0)
    {
        ans += b / 2 + b % 2;
        a -= (b % 2) * 2;
    }
    if (a > 0)
    {
        ans += a / 4;
        if (a % 4 != 0)
            ans += 1;
    }

    cout << ans << endl;
}
int main()
{
    solve();
    return 0;
}