#include <bits/stdc++.h>
using namespace std;

#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
typedef long long ll;

int main(){
	int N;
    int a[110];  // 最大 100 個ですが余裕をもたせます
    cin >> N;
    for (int i = 0; i < N; ++i) cin >> a[i];

    sort(a, a + N);                  // a[0:N] を小さい順にソート
    sort(a, a + N, greater<int>());  // a[0:N] を大きい順にソート
}