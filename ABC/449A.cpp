#include <bits/stdc++.h>
using namespace std;
int main()
{
    int D;
    cin >> D;
    long double r = D / 2.0L;
    long double ans = acosl(-1.0L) * r * r;
    cout << fixed << setprecision(15) << ans << endl;
}