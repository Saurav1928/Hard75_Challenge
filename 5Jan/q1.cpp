#include <bits/stdc++.h>
using namespace std;

int fun(int n, int a, int b, int c)
{
    int ans = 0;
    for (int x = 0; x * a <= n; x++)
    {
        for (int y = 0; y * b + a * x <= n; y++)
        {
            int z = 0;
            int zc = (n - (a * x + b * y));
            if (zc % c == 0)
            {
                z = zc / c;
                ans = max(ans, x + y + z);
            }
        }
    }
    return ans;
}

void solve()
{
    int n;
    cin >> n;
    int a, b, c;
    cin >> a >> b >> c;
    // xa+yb+zc =n   ---> find z for which zc= n- (xa+yb);

    // max a can be n/a , ex. if we have n=6 and a=2 then to make 6 , we need max 3 a (2*3=6)
    cout << fun(n, a, b, c) << endl;
}
int main()
{

    solve();

    return 0;
}