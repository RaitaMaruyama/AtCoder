#include <bits/stdc++.h>
using namespace std;

int GCD(int x, int y){
  if(y == 0){
    return x;
  }
  return GCD(y, x%y);
}

int main(){
	int x, y;
  cin >> x >> y;

  int ans = GCD(x, y);

  cout << ans << endl;

}
