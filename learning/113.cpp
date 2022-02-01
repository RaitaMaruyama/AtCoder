#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;

  cin >> N;

	vector<int> point(N);
	int sum = 0, ave;

	for(int i = 0; i < N; i++){
		cin >> point.at(i);
		sum += point.at(i);
	}
	ave = sum / N;

	for(int i = 0; i < N; i++){
		if(point.at(i) < ave){
			cout << ave - point.at(i) << endl;
		}
		else{
			cout << point.at(i) - ave << endl;
		}
	}
}
