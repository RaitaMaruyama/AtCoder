#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
  long long N, K;
  long long a[100001];
  cin >> N >> K;
  long long ans = 0;
  long long sum = 0;
  long long now;

  for(int i = 0; i < N; i++){
    cin >> a[i];
  }

  for(int i = 0; i < N; i++){
    sum += a[i];
    if(sum >= K){
      ans += N - i;
      now = i;
      break;
    }
  }

  for(int i = 0; i < N; i++){
    sum -= a[i];
    while(1){
      if(sum >= K){
        ans += N - now;
        break;
      }
      else{
        now++;
        if(now >= N){
          break;
        }
        sum += a[now];
      }
    }
  }

  cout << ans << endl;

  return 0;
}
