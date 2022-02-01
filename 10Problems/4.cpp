#include <bits/stdc++.h>
using namespace std;

#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
typedef long long ll;

int main(){
	int A, B, C, X;
    cin >> A >> B >> C >> X;
    int cnt = 0;

    rep (i, 0, A+1) {
        rep (j, 0, B+1) {
            rep (k, 0, C+1) {
                int sum = i * 500 + j * 100 + k * 50;
                if (sum == X){
                    cnt++;
                }
            }      
        }
    }

    cout << cnt << endl;

	return 0;
}
