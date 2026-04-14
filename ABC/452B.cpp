#include <iostream>
#include<string>
using namespace std;
int main() {
    int H, W;
    cin >> H >> W;
    string ans, ans1;
    ans.insert(0, W, '#');
            cout << ans << endl;
            ans="##";
            ans.insert(1, W-2, '.');
            cout << ans << endl;
    for(int i = 1; i < H-2; i++){
            cout << ans << endl;
    }
     ans1.insert(0, W, '#');
            cout << ans1 << endl;
}