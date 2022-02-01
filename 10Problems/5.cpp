#include <bits/stdc++.h>
using namespace std;

#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
typedef long long ll;

int calcsum (int n) {
    int sum = 0;
    int tmp = n;
    while(1) {
        if(tmp >= 10) {
            sum += tmp % 10;
            tmp /= 10;
        }
        else {
            sum += tmp;
            break;
        }
    }
    return sum;
}

int main(){
	int N;
    int A, B;
    int result = 0;

    cin >> N >> A >> B;

    rep(i, 1, N+1) {
        if(calcsum(i) >= A && calcsum(i) <= B) result += i;
    }

    cout << result << endl;

	return 0;
}
