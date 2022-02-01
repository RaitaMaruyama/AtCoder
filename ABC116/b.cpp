#include <bits/stdc++.h>
using namespace std;

int main(){
	int s;
	vector<int> bucket(1000000, 0);

	cin >> s;

	int i = 1;

	while(1){
		if(s % 2 == 0){
			s = s / 2;
		}
		else{
			s = 3 * s + 1;
		}
		i++;
		if(bucket.at(s) == 1){
			cout << i << endl;
			break;
		}
		else{
			bucket.at(s) = 1;
		}
	}
}
