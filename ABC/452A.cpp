#include <iostream>
using namespace std;
int main(){
    int M, D;
    cin >> M >> D;
    int a[4] = {3,5,7,9};
    bool Can = false;
    for(int i = 0; i < 4; i++){
        if(M == D && M == a[i]) {
            Can = true;
            break;
        }
    }
    if(M == 1 && D == 7) Can = true;
    if(Can) cout << "Yes" << endl;
    else{cout << "No" << endl;}
}