#include <iostream>
#include <string>
using namespace std;
// nの各桁の足し算をする計算
int function(int n){
    int sum = 0;
    while( n >= 1){
        sum += n % 10;
        n = n / 10;
    }
    return sum;
}

int main(){
    int N, A, B;
    cin >> N >> A >> B;
    int total = 0;
    for ( int i = 1; i <= N; i++){
        int b = function(i);
        if(b >= A && b <= B ) total +=i;
    }
    cout << total << endl;
    }
