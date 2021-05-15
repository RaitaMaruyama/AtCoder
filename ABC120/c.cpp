#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
	int n;
  string s;
  cin >> s;
  n = s.length();
  int cnt1 = 0;
  int cnt0 = 0;

  for(int i = 0; i < n; i++){
    if(s.at(i) == '0'){
      cnt0++;
    }
    else{
      cnt1++;
    }
  }

  int m = min(cnt0, cnt1);

  std::cout << m * 2 << '\n';

}
