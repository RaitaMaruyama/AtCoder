#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
	string s, ans = "YES";

	cin >> s;

	int i = s.size();

	while(1){
		if(i == 0) break;
		else if(i >= 5 && s.substr(i-5, 5) == "dream"){
			i -= 5;
		}
		else if(i >= 7 && s.substr(i-7, 7) == "dreamer"){
			i -= 7;
		}
		else if(i >= 5 && s.substr(i-5, 5) == "erase"){
			i -= 5;
		}
		else if(i >= 6 && s.substr(i-6, 6) == "eraser"){
			i -= 6;
		}
		else{
			ans = "NO";
			break;
		}
	}
	cout << ans << endl;
}
