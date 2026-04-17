#include <iostream>
#include <vector>
using namespace std;
int main(){
    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    vector<int> B(N);
    for(int i = 0; i < N; i++){
        cin >> A[i] >> B[i];
    }
    // 部門ごと
    for(int i = 1; i <= M; i++){
        int incounter = 0;
        int outcounter = 0;
        // 部門内での該当者の数を求める
        for(int t = 0; t < N; t++){
            if(i == A[t]) outcounter++;
            if(i == B[t]) incounter++;
        }
        cout << incounter - outcounter << endl;
    }
}