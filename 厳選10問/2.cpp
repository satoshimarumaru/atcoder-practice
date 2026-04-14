#include <iostream>
#include <string>
using namespace std;
int main (){
    string s;
    cin >> s;
    int i = 0;
    int counter = 0;
    while(i < 3){
        if(s[i] == '1' ) counter++;
        i++;
    }
    cout << counter << endl;
}