#include <bits/stdc++.h>
using namespace std;

#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
typedef long long ll;

int main(){
	int N;
    int d;
    int check[101] = {};
    int result = 0;

    cin >> N;
    rep(i, 0, N) {
        cin >> d;
        check[d] = 1;
    }

    rep(i, 1, 101) {
        if(check[i] == 1) {
            result++;
        }
    }

    cout << result << endl;

	return 0;
}
