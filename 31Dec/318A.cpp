#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    long long odd = n / 2 + n % 2;
    long long even = n - odd;
    long long a, d = 2;
    if (k <= odd)
        a = 1;
    else
    {
        a = 2;
        k = k - odd;
    }
    cout << a + (k - 1) * d << endl;
    return 0;
}