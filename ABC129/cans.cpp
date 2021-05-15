#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
const long long mod = 1000000007;

int main(){
  int N, M;
  cin >> N >> M;

  vector<int> oks(N+1, true);
  for(int i = 0; i < M; i++){
    int a;
    cin >> a;
    oks[a] = false;
  }

  vector<long long int> dp(N+1);
  dp[0] = 1;
  if(oks[1]){
    dp[1] = 1;
  }
  for(int next = 2; next <= N; next++){
    if(oks[next]){
      dp[next] = dp[next - 1] + dp[next - 2];
      dp[next] %= mod;
    }
  }

  cout << dp[N] << endl;
  return 0;

  return 0;
}
