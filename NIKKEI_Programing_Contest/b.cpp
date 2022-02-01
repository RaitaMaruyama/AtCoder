#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

int main(){
	string a, b, c;
	int n;
	int count = 0;

	cin >> n >> a >> b >> c;

	for(int i = 0; i < n; i++){
		if(a.at(i) == b.at(i) && b.at(i) != c.at(i)) count++;
		else if(b.at(i) == c.at(i) && c.at(i) != a.at(i)) count++;
		else if(c.at(i) == a.at(i) && a.at(i) != b.at(i)) count++;
		else if(a.at(i) != b.at(i) && b.at(i) != c.at(i)) count += 2;
	}

	cout << count << endl;

}
