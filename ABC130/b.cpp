#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
  int N, L, X;
  cin >> N >> X;

  int sum = 0;
  int ans = 1;

  for(int i = 1; i <= N; i++){
    cin >> L;
    sum += L;
    if(sum > X){
      break;
    }
    ans++;
  }

  cout << ans << endl;

  return 0;
}
