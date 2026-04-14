#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<int> t(N);
    vector<int> x(N);
    vector<int> y(N);
    for (int i = 0; i < N; i++)
    {
        cin >> t[i] >> x[i] >> y[i];
    };

    int prevT = 0, prevX = 0, prevY = 0;
    bool Can = true;
    for (int i = 0; i < N; i++)
    {
        int dt = t[i] - prevT;
        int dist = abs(x[i] - prevX) + abs(y[i] - prevY);

        if (dt < dist || (dt - dist) % 2 != 0)
        {
            Can = false;
            break;
        }

        prevT = t[i];
        prevX = x[i];
        prevY = y[i];
    }
    if (Can)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}