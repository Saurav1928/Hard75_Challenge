#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    bool ans = false;
    map<int, int> mp;
    vector<long long> v;
    int d;
    for (int i = 0; i < n; i++)
    {
        cin >> d;
        d %= 10;
        if (mp[d] < 3)
            mp[d]++;
    }
    for (auto it : mp)
    {
        int n = it.second;
        while (n)
        {
            v.push_back(it.first);
            n--;
        }
    }
    n = v.size();
    for (int i = 0; i < n and ans == false; i++)
    {
        for (int j = i + 1; j < n and ans == false; j++)
        {
            for (int k = j + 1; k < n and ans == false; k++)
            {
                if ((v[i] + v[j] + v[k]) % 10 == 3)
                {
                    ans = true;
                    break;
                }
            }
        }
    }
    if (ans)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}