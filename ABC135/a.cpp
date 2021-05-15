#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
  long long A, B;
  cin >> A >> B;

  if((A + B) % 2 == 0){
    long long ans = (A + B) / 2;
    cout << ans << endl;
  }
  else{
    cout << "IMPOSSIBLE" << endl;
  }

  return 0;
}
