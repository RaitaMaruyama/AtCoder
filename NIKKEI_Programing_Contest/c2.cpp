#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;

	cin >> n;

	vector<int> a(n), b(n);
	vector<int> happy(n);
	vector<size_t> indices(n);
	iota(indices.begin(), indices.end(), 0);

	long asum = 0, bsum = 0;

	for(int i = 0; i < n; i++){
		cin >> a.at(i) >> b.at(i);
		happy.at(i) = a.at(i) + b.at(i);
	}

	sort(indices.begin(), indices.end(), [&happy](size_t i1, size_t i2){
		return happy[i1] > happy[i2];
	});

	for(int i = 0; i < n; i++){
		if(i % 2 == 0){
			asum += a.at(indices.at(i));
		}
		else{
			bsum += b.at(indices.at(i));
		}
	}

	cout << asum - bsum << endl;

}
