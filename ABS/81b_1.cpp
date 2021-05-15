#include <bits/stdc++.h>
using namespace std;

int main(){
	int N, count = 0;

	cin >> N;
	
	vector<int> a(N);

	for(int i = 0; i < N; i++){
		cin >> a.at(i);
	}

	int finish = 0;

	while(1){
		for(int i : a){
			if(i % 2 == 1){
				finish = 1;
				break;
			}
		}
		if(finish == 1) break;
		count++;
		for(int i = 0; i < N; i++){
			a.at(i) /= 2;
		}
	}

	cout << count << endl;
}
