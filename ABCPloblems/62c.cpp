#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
  long long int H, W;
  cin >> H >> W;

  long long int a, b, c;
  long long int ans = LLONG_MAX;
  vector<long long int> v(100001);

  //case0
  if(H % 3 == 0){
    ans = 0;
  }
  else{
    for(int i = 1; i < H; i++){
      a = i * W;
      b = ((H - i) / 2) * W;
      c = H * W - a - b;
      v.at(i) = max(a, max(b, c)) - min(a, min(b, c));
      ans = min(ans, v.at(i));
    }
    for(int i = 1; i < H; i++){
      a = i * W;
      b = (H - i) * (W / 2);
      c = H * W - a - b;
      v.at(i) = max(a, max(b, c)) - min(a, min(b, c));
      ans = min(ans, v.at(i));
    }
  }

  //case1
  if(W % 3 == 0){
    ans= 0;
  }
  else{
    for(int i = 1; i < W; i++){
      a = H * i;
      b = H * ((W - i) / 2);
      c = H * W - a - b;
      v.at(i) = max(a, max(b, c)) - min(a, min(b, c));
      ans = min(ans, v.at(i));
    }
    for(int i = 1; i < W; i++){
      a = H * i;
      b = H / 2 * (W - i);
      c = H * W - a - b;
      v.at(i) = max(a, max(b, c)) - min(a, min(b, c));
      ans = min(ans, v.at(i));
    }
  }

  cout << ans << endl;

  return 0;
}
