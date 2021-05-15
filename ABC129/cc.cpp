#include <bits/stdc++.h>
using namespace std;

long long comb(long long n, long long r) {
  if (r*2 > n) r = n - r;
  long long dividend = 1;
  long long divisor  = 1;
  for ( long long i = 1; i <= r; ++i ) {
    dividend *= (n-i+1);
    divisor  *= i;
  }
  long long re = dividend / divisor;
  return re;
}

int main(){
  long long N, M;

  cin >> N >> M;

  vector<long long> v(N);
  long long now = 0;
  long long sum = 1;

  for(long long i = 0; i < M; i++){
    cin >> v.at(i);
    if(i > 0 && v.at(i) - 1 == v.at(i - 1)){
      sum = 0;
    }
  }

  for(long long i = 0; i < M; i++){
    long long stage = (v.at(i) - 1) - now;
    long long tsum = 0;
    //cout << "stage " << stage << endl;
    for(long long j = 0; j <= stage / 2; j++){
      long long temp = stage - j;
      tsum += comb(temp, j);
      //cout << "j " << j << "tsum " << tsum << endl;
    }
    sum *= tsum;
    now = v.at(i) + 1;
  }

  long long stage = N - now;
  long long tsum = 0;
  //cout << "stage " << stage << endl;
  for(long long j = 0; j <= stage / 2; j++){
    long long temp = stage - j;
    tsum += comb(temp, j);
    //cout << "j " << j << "tsum " << tsum << endl;
  }
  sum *= tsum;

  cout << sum % 1000000007 << endl;

  return 0;
}
