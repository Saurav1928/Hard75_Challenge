#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<string> v(n);
    set<string> st;
    int flg = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        st.insert(v[i]);
    }
    for (int i = 0; i < n; i++)
    {
        flg = 0;
        for (int j = 1; j < v[i].length(); j++)
        {
            string pre = v[i].substr(0, j);
            string suf = v[i].substr(j, v[i].length() - j);
            if (st.find(pre) != st.end() and st.find(suf) != st.end())
            {
                flg = 1;
                break;
            }
        }
        cout << flg;
    }
    cout << endl;
}
int main()
{

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}