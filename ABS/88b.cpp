#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, a = 0, b = 0;

	cin >> n;

	vector<int> num(n);

	for(int i = 0; i < n; i++){
		cin >> num.at(i);
	}

	sort(num.begin(), num.end());
	reverse(num.begin(), num.end());

	for(int i = 0; i < n; i++){
		if(i % 2 == 0){
			a += num.at(i);
		}
		else{
			b += num.at(i);
		}
	}

	cout << a - b << endl;
}
