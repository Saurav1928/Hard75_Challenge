// Codeforces Beta Round 96 (Div. 2)
// Problem A

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string str;
    cin >> str;
    bool ans = false;
    for (auto it : str)
    {
        if (it == 'H' or it == 'Q' or it == '9')
        {
            ans = true;
            break;
        }
    }
    if (ans)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    solve();
    return 0;
}