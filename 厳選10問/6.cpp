#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++){
        cin >> a[i];
    }
    // 配列を大きい順に並べる
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    
    int Alice = 0, Bob = 0;
    
    for(int i = 0; i < N; i++ ){
        if(i % 2 ==0 ) Alice += a[i];
        else Bob += a[i];
    }

    cout << Alice - Bob << endl;

}
