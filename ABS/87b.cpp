#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b, c, x;
	int i, j, k, count = 0;

	cin >> a >> b >> c >> x;

	for(i = 0; i <= a; i++){
		for(j = 0; j <= b; j++){
			for(k = 0; k <= c; k++){
				if(i * 500 + j * 100 + k * 50 == x){
					count++;
				}
			}
		}
	}

	cout << count << endl;

}
