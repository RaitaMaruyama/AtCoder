#include <bits/stdc++.h>
using namespace std;

#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
typedef long long ll;

int main(){
	int N;
    int a[203];
    int sum = 0;

    cin >> N;
    rep(i, 0, N) cin >> a[i];

    sort(a, a+N, greater<int>());

    rep(i, 0, N) {
        if(i % 2 == 0) {
            sum += a[i];
        }
        else {
            sum -= a[i];
        }
    }

    cout << sum << endl;

	return 0;
}
