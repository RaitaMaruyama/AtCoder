#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b, c;
  int result;

  cin >> a >> b >> c;

  if(b < (a * c)){
    result = b / a;
  }
  else {
    result = c;
  }

  cout << result << endl;

}
