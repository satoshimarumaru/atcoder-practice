#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string divide[4] = {"dream", "dreamer", "erase", "eraser"};
    string S;
    cin >> S;
    // 配列の順番を入れ替える
    reverse(S.begin(),S.end());
    for (int i = 0; i < 4; i++){
        reverse(divide[i].begin(), divide[i].end());
    }
    bool can = true;
    for(int i = 0; i < S.size();){
        bool can2 = false;
        for(int t = 0; t < 4; t++){
            string d = divide[t];
            if(S.substr(i,d.size()) == d){
                i += d.size();
                can2 = true;
                break;
            }
        }
        if(!can2){
            can = false;
            break;
        }
    }
    if(can) cout << "YES" << endl;
    else cout << "NO" << endl;
}