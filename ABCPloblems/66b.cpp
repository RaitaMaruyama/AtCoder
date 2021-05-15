#include <bits/stdc++.h>
#include <algorithm>
//#include <string>
using namespace std;

int main(){
  string s;
  cin >> s;
  int now = 0;

  if(s.length() % 2 == 0){
    now = 2;
  }
  else{
    now = 1;
  }

  while(1){
    //cout << "now " << now << endl;
    string a = s.substr(0, (s.length() - now) / 2);
    string b = s.substr((s.length() - now) / 2, (s.length() - now) / 2);
    //cout << "a " << a << endl;
    //cout << "b " << b << endl;
    if(a.compare(b) == 0){
      break;
    }
    now += 2;
  }

  cout << s.length() - now << endl;

  return 0;
}
