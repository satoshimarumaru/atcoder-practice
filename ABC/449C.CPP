#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, L, R;
    cin >> N >> L >> R;
    string S;
    cin >> S;
    // 下の全探索だと計算量が多すぎる
    // int counter = 0;
    // for(int i = 1; i <= N; i++){
    //     for(int j = i; j <= N; j++){
    //         if(S[i-1] == S[j-1] && j - i >= L && j - i <= R){
    //             counter++;
    //         }
    //     }
    // }
    // cout << counter << endl;
    long long ans = 0;
    map<char, int> cnt;
    for (int j = 0; j < N; j++)
    {
        if (j - L >= 0)
            cnt[S[j - L]]++;
        if (j - R - 1 >= 0)
            cnt[S[j - R - 1]]--;
        ans += cnt[S[j]];
    }
    cout << ans << endl;
}