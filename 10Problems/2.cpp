#include <bits/stdc++.h>
using namespace std;

#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
typedef long long ll;

int main(){
	string s;
    cin >> s;
    int cnt = 0;

    rep(i, 0, 3) {
        if (s[i] == '1') cnt++;
    }

    cout << cnt << endl;

	return 0;
}
