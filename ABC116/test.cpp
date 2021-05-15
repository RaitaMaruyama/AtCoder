#include <bits/stdc++.h>
using namespace std;

int cnt = 0;

void watering(vector<int> h, int size){
	cnt++;
	if(size == 1) return;
	
	for(int i = 0; i < size; i++){
		h.(i)--;
	}
}

int main(){
	int n;

	cin >> n;

	vector<int> h(n, 0);

	for(int i = 0; i < n; i++){
		cin >> h.at(i);
	}

	watering(h, n);

}
