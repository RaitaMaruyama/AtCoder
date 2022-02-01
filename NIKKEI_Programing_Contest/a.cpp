#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

int main(){
	int n, a, b;

	cin >> n >> a >> b;

	int max = min(a, b);
	int min;
	if(b - (n - a) <= 0){
		min = 0;
	}else{
		min = b - (n - a);
	}

	cout << max << " " << min << endl;

}
