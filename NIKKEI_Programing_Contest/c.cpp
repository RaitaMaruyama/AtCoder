#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

int main(){
	int n;

	cin >> n;

	vector<int> a(n), b(n);
	vector<int> aeat(n), beat(n);
	vector<int> happy(n);
	vector<int> check(n, 0);

	for(int i = 0; i < n; i++){
		cin >> a.at(i) >> b.at(i);
		happy.at(i) = a.at(i) + b.at(i);
	}

	int acount = 0, bcount = 0;

	for(int j = 0; j < n; j++){
		int maxhappy = 0;
		int relhappy;
		if(j % 2 == 0){
			for(int i = 0; i < n; i++){
				relhappy = a.at(i) + b.at(i);
				if(maxhappy < relhappy && check.at(i) == 0){
					aeat.at(acount) = i;
					maxhappy = relhappy;
				}
			}
			check.at(aeat.at(acount)) = 1;
			acount++;
		}
		else{
			for(int i = 0; i < n; i++){
				relhappy = b.at(i) + a.at(i);
				if(maxhappy < relhappy && check.at(i) == 0){
					beat.at(bcount) = i;
					maxhappy = relhappy;
				}
			}
			check.at(beat.at(bcount)) = 1;
			bcount++;
		}
	}

	long aresult = 0;
	long bresult = 0;

	for(int i = 0; i < (n+1)/2; i++){
		aresult += a.at(aeat.at(i));
	}
	for(int i = 0; i < n/2; i++){
		bresult += b.at(beat.at(i));
	}

	cout << aresult - bresult << endl;

}
