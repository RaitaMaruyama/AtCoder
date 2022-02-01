#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
  int W, H;
  int x, y;
  cin >> W >> H;
  cin >> x >> y;

  cout << (double)W * (double)H / 2 << " ";

  if(x == (double)W / 2 && y == (double)H / 2){
    cout << 1;
  }
  else{
    cout << 0;
  }

  return 0;
}
