#include <iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    for(int i = 0; i < N; i++){
        if(i > 0) cout << ",";
        cout << N - i;
    }
}