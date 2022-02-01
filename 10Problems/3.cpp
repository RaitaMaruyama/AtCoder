#include <bits/stdc++.h>
using namespace std;

#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
typedef long long ll;

int main(){
	int N;
    int a[202];
    int check = 0;
    int i = 1;

    cin >> N;
    rep(i, 0, N) cin >> a[i];

    while(true) {
        rep(j, 0, N) {
            if(a[j] % (int)(pow(2, i))){
                check = 1;
                break;
            }
        }
        if(check) break;
        i++;
    }

    cout << i-1 << endl; 

	return 0;
}
