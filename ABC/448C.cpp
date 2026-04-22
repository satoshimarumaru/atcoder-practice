#include <bits/stdc++.h>
using namespace std;
int main(){
    int N, Q;
    cin >> N >> Q;
    vector<int>A(N);
    vector<int>IndexA(A.size());
    
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    sort(IndexA.begin(),IndexA.end(),[&](int i, int j){
        return A[i] < A[j];
    });
    vector<int>K(Q);
    vector<vector<int>>B(Q,vector<int>(5));
    for(int i = 0; i < Q; i++){
        cin >> K[i];
        for(int t = 0; t < K[i]; t++){
            cin >> B[i][t];
        }
    }

    






    
}