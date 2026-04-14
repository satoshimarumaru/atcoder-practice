#include <iostream>
#include <string>
using namespace std;
int main () {
    int N;
    int A[300];
    cin >> N;
    int counter;
    for (int i =0; i < N; i++){
        cin >> A[i];
        if(A[i] % 2 == 1) counter++;
    }
        int q = 0;
        bool b = true;
        while(b){
            for(int t = 0; t < N; t++){
                if(A[t] % 2 ==1) b = false ;
            }
            if(b == false) break;
            for(int t = 0; t < N; t++){
                A[t] = A[t] / 2;
            }
            q++;
        }
        cout << q << endl;
    }



