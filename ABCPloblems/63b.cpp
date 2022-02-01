#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
  string s;
  cin >> s;
  vector<int> v(26);
  int flag = 1;

  for(int i = 0; i < s.length(); i++){
    v.at(s.at(i) - 'a')++;
    if(v.at(s.at(i) - 'a') >= 2){
      flag = 0;
      break;
    }
  }

  if(flag){
    cout << "yes" << endl;
  }
  else{
    cout << "no" << endl;
  }

  return 0;
}
