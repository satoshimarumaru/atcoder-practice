#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int N;
    cin >> N;
    string S;
    cin >> S;
    while(S[0] == 'o') {
        S.erase(0,1);
    }
    

    if(S.size() > 0)cout << S << endl;
    else{cout << "" << endl;}

    return 0;
}