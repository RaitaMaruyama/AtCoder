#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

int main(){
	int n, check = 1;

	cin >> n;

	vector<int> t(n);
	vector<int> x(n);
	vector<int> y(n);
	vector<int> nowt(n + 1);
	vector<int> nowx(n + 1);
	vector<int> nowy(n + 1);

	for(int i = 0; i < n; i++){
		cin >> t.at(i) >> x.at(i) >> y.at(i);
	}

	nowt.at(0) = 0;
	nowx.at(0) = 0;
	nowy.at(0) = 0;

	for(int i = 0; i < n; i++){
		int distance = abs(x.at(i) - nowx.at(i) + y.at(i) - nowy.at(i));
		int interval = t.at(i) - nowt.at(i);
		//cout << "nowx " << nowx.at(i) << endl;
		//cout << "nowy " << nowy.at(i) << endl;
		//cout << "distance " << distance << endl;
		//cout << "interval " << interval << endl;
		if(distance <= interval && distance % 2 == interval % 2){
			nowt.at(i + 1) = t.at(i);
			nowx.at(i + 1) = x.at(i);
			nowy.at(i + 1) = y.at(i);
			continue;
		}
		else{
			check = 0;
			break;
		}
	}

	if(check) cout << "Yes" << endl;
	else cout << "No" << endl;

}
