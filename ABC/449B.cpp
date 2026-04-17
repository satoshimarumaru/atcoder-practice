#include <bits/stdc++.h>
using namespace std;
int main()
{
    int H, W, Q;
    cin >> H >> W >> Q;
    vector<int> A(Q);
    vector<int> B(Q);
    for (int i = 0; i < Q; i++)
    {
        cin >> A[i] >> B[i];
    };
    for (int i = 0; i < Q; i++)
    {
        int ans1 = 0;
        int ans2 = 0;
        if (A[i] == 1)
        {
            ans1 = B[i] * W;
            H -= B[i];
            cout << ans1 << endl;
        }
        else if (A[i] == 2)
        {
            ans2 = B[i] * H;
            W -= B[i];
            cout << ans2 << endl;
        }
    }
}