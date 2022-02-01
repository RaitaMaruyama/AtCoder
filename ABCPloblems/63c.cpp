#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> v(N);
  int sum = 0;
  int ans;
  int flag = 0;

  for(int i = 0; i < N; i++){
    cin >> v.at(i);
    sum += v.at(i);
  }

  if(sum % 10 != 0){
    ans = sum;
  }
  else{
    sort(v.begin(), v.end());
    for(int i = 0; i < N; i++){
      if(v.at(i) % 10 != 0){
        ans = sum - v.at(i);
        flag = 1;
        break;
      }
    }
    if(!flag){
      ans = 0;
    }
  }

  cout << ans << endl;

  return 0;
}
