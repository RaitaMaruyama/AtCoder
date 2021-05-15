#include <bits/stdc++.h>
using namespace std;

int gcd(int x, int y){
  if(y == 0){
    return x;
  }
  return gcd(y, x%y);
}

int main(){
	int a, b, k;
  int g;
  int result;
  int cnt = 0;

  cin >> a >> b >> k;

  g = gcd(a, b);

  int i = g;
  int flag = 0;
  while(1){
    if(g % i == 0){
      cnt++;
      if(cnt == k){
        flag = 1;
        break;
      }
    }
    if(flag == 1){
      break;
    }
    i--;
  }

  cout << i << endl;

}
