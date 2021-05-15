#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
static const ull MOD = 1000000007LL;

int n;
char s[100005]
uint64_t dp[100005][13];

uint64_t solve(){
  int i, j, ki;
  uint64_t res = 0;

  cin >> s;
  n = strlen(s);

  dp[0][0] = 1;
  for(int i = 0; i < n; i++){
    int c;
    if(s[i] == '?') c = -1;
    else c = s[i] - '0';

    for(j = 0; j < 10; j++){
      if(c != -1 && c != j) continue;
      for(ki = 0; ki < 13; ki++){
        dp[i + 1][(ki * 10 + j) % 13] += dp[i][ki];
      }
    }
  }
  for(int j = 0; j < 13; j++) dp[i + 1][j] %= MOD;
}

int main(){
  solve();

  return 0;
}
