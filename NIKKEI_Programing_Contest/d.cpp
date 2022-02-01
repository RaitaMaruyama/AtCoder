#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m;

	cin >> n >> m;

	vector<int> a(n), b(n);
	vector<int> bucket(n, 0);
	
	for(int i = 0; i < n; i++){
		cin >> a.at(i) >> b.at(i);
	}

	for(int i = 0; i < n; i++){
		bucket.at(b.at(i))++;
	}

	

}
