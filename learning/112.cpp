#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

	int size = S.size();
	int ans = 1;

	for(int i = 0; i < size; i++){
		if(S.at(i) == '+'){
			ans++;
		}
		else if(S.at(i) == '-'){
			ans--;
		}
	}

	cout << ans << endl;
}
