#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int T, X;
    cin >> T >> X;
    vector<int> A(T + 1);
    for (int i = 0; i < T + 1; i++)
    {
        cin >> A[i];
    };
    int Saveddate = A[0];
    cout << 0 << " " << A[0] << endl;
    for (int i = 0; i < T + 1; i++)
    {
        int dA = abs(A[i] - Saveddate);
        if (dA >= X)
        {
            Saveddate = A[i];
            cout << i << " " << A[i] << endl;
        }
    }
}