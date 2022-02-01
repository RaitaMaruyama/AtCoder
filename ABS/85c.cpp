#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	float y;
	int finish = 0;

	cin >> n >> y;
	int ans1 = -1, ans2 = -1, ans3 = -1;

	for(int i = 0; i <= n; i++){
		for(int j = 0; i + j <= n; j++){
			int k = n - i - j;
			int total = 10000 * i + 5000 * j + 1000 * k;
			if(y == total){
				ans1 = i;
				ans2 = j;
				ans3 = k;
			}
		}
	}

	cout << ans1 << " " << ans2 << " " << ans3 << endl;
}
