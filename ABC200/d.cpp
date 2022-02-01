#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;

int main(){
	int N;
    ll a[202];
    int res[202];

    cin >> N;
    rep(i, N) cin >> a[i];
    rep(i, N) res[i] = a[i]%200;



    cout << "NO" << endl;

	return 0;
}
