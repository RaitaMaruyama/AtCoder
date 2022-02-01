#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, A[201010];
    int cnt[202] = {};
    long long ans = 0;

    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> A[i];
    }

    for(int i = 0; i < N; i++){
        int mo = A[i] % 200;
        ans += cnt[mo];
        cnt[mo]++;
    }

    cout << ans << endl;

	return 0;
}
