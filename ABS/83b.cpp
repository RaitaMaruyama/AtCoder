#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, a, b;
	int sum, ans = 0;

	cin >> n >> a >> b;

	for(int i = 0; i <= n; i++){
		sum = 0;
		int j = i;
		while(1){
			sum += j % 10;
			if(j < 10){
				break;
			}
			else{
				j /= 10;
			}
		}
		if(sum >= a && sum <= b){
			ans += i;
		}
	}

	cout << ans << endl;
}
