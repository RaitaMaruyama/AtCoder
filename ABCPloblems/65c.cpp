#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
const long long mod = 1000000007;

long long fact(long long k){
  long long sum = 1;
  for(long long i = 2; i <= k; i++){
    sum = sum * i % mod;
  }
  return sum;
}

int main(){
  long long N, M;
  cin >> N >> M;
  long long ans;

  if(abs(N - M) >= 2){
    ans = 0;
  }
  else if(abs(N - M) == 1){
    ans = fact(N) * fact(M);
  }
  else{
    ans = (fact(N) * fact(M)) * 2;
  }

  cout << ans % mod << endl;

  return 0;
}
