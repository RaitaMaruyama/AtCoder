#include <bits/stdc++.h>
using namespace std;

#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
typedef long long ll;

// N個の整数Aiが与えられます。N個の整数から、
// 0個以上を選び和をとった値は、何通り存在するでしょうか？
int main(){
	int N;
    int a[100002] = {};
    set<int> ans;

    cin >> N;
    rep(i, 0, N) cin >> a[i];

    int bit = pow(2, N);

    rep(i, 0, bit) {
        int sum = 0;
        rep(j, 0, N) {
            // bitが立っている要素について、和を出す
            if ((i >> j) & 1) {
                sum += a[j];
            }
            // setにinsertすることで重複したものを数えない
            ans.insert(sum);
        }
    }

    cout << ans.size() << endl;

	return 0;
}
