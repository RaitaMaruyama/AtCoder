#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;

	cin >> N;
	
	int a;
	int count;
	int m = INT_MAX;

	for(int i = 0; i < N; i++){
		cin >> a;
		count = 0;
		while(1){
			if(a % 2 == 0){
				count++;
				a /= 2;
			}
			else{
				break;
			}
		}
		m = min(m, count);
	}

	cout << m << endl;
}
