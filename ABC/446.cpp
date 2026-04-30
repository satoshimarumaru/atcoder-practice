#include <bits/stdc++.h>
using namespace std;

int main (){
    int N, D;
cin >> N >> D;
vector<int>A(N);
vector<int>B(N);
for(int i = 0; i < N; i++) cin >> A[i];
for(int i = 0; i < N; i++) cin >> B[i];
for(int i = 0; i < N; i++)
{
// 卵の総和が変わる変数
int sum = 0;
for(int t = 0; t < N; t++){
    sum += A[t];
    if(sum > B[i]){
        A[t] = sum -B[i];
        break;
    }else if(sum == B[i]){
        A.erase(A.begin());
        break;
    }
    else{
        A.erase(A.begin());
}
}

cout << 





}












}