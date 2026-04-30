#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    string K = "100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"; // 10^100

    for (int s = 0; s < N; s++)
    {
        vector<int> path;
        vector<int> visited(N, -1);
        int pos = s;
        while (visited[pos] == -1)
        {
            visited[pos] = path.size();
            path.push_back(pos);
            pos = A[pos] - 1;
        }
        int loop_start = visited[pos];
        int loop_len = path.size() - loop_start;

        // Kをlong longで持てないので、前処理部分とループ部分で分けて考える
        int64_t steps;
        if (K.size() <= 15)
        {
            steps = stoll(K);
        }
        else
        {
            // K >= 10^15 の場合、前処理部分を超えるので、ループ部分だけ考えればよい
            // K % ループ長を求める
            int rem = 0;
            for (char c : K)
            {
                rem = (rem * 10 + (c - '0')) % loop_len;
            }
            steps = rem + loop_start;
            if (steps >= path.size())
                steps = loop_start + rem % loop_len;
        }
        int ans;
        if (steps < path.size())
        {
            ans = path[steps];
        }
        else
        {
            int idx = loop_start + (steps - loop_start) % loop_len;
            ans = path[idx];
        }
        cout << ans + 1 << endl;
    }
}
// 計算量が多すぎて間違っている