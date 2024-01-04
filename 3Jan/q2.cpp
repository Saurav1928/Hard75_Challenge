#include <bits/stdc++.h>
using namespace std;
#define n 1e6
vector<bool> is_prime(n + 1, true);

int check_perfect_square(long long num)
{
    double sqrt_n = sqrt(num);
    if (sqrt_n == int(sqrt_n))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void solve()
{
    long long l;
    cin >> l;
    if (l == 4)
    {
        cout << "YES" << endl;
        return;
    }
    else if ((l & 1) == 0 or l <= 5)
    {
        cout << "NO" << endl;
        return;
    }
    if (is_prime[(sqrtl(l))] and check_perfect_square(l))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
void generatePrime()
{
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= n; i++)
    {
        if (is_prime[i] && (long long)i * i <= n)
        {
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }
}

int main()
{

    int t;
    cin >> t;
    generatePrime();
    while (t--)
        solve();

    return 0;
}