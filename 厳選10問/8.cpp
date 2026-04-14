#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int N, Y;
    cin >> N >> Y;
    int a = -1, b = -1, c = -1;
    for(int i = 0; i <= N; i++) {
        for (int t = 0; t <= (N - i); t++){
            int sum = 10000 * i + 5000 * t + 1000 * (N - i - t);
            if(sum == Y) {
                a = i, b = t, c = (N- i - t);
                break;
            };
        }
    }
    cout << a << " " << b << " " << c << endl;
}