#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;

	cin >> n;

	vector<int> h(n, 0);

	for(int i = 0; i < n; i++){
		cin >> h.at(i);
	}

	int cnt;

	for(int l = 0; l < n; l++){
		while(h.at(l) > 0){
			int r;
			for(r = l + 1; r < n; r++){
				if(h.at(r) == 0) break;
			}
			for(int i = l; i < r; i++){
				h.at(i)--;
			}
			cnt++;
		}
	}

	cout << cnt << endl;

}
