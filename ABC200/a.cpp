#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int result = N/100;
    int res = N%100;
    if(res != 0) {
        cout << result + 1 << endl;
    }
    else {
        cout << result << endl;
    }
}