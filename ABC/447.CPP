#include <bits/stdc++.h>
using namespace std;

string removeA(string S){
    string an ;
    for(char c : S){
        if(c != 'A') an += c;
    }
}

vector<int> f (string S){
    vector<int> as = {0};
    for(char C : S){
        if(C == 'A') as.back()++;
        else as.push_back(0);
    } 
    return as;
}


int main(){
    string S, T;
    cin >> S >> T;
    if(removeA(S) != removeA(T)) cout << -1 << endl;
    else{
        auto aS = f(S);
        auto aT = f(T);
        int ans = 0;
        for(int i = 0; i < aS.size(); i++){
            ans += abs(aS[i] - aT[i]);
        }
        cout << ans << endl;
    }






}