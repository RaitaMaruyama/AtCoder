#include <bits/stdc++.h>
using namespace std;

long long comb(long long n, long long r) {
  long long num = 1;
  for(int i = 1; i <= r; i++){
    num = num * (n - i + 1) / i;
  }
  return num;
}

int main(){
  long long N, M;

  cin >> N >> M;

  vector<long long> v(N);
  long long now = 0;
  long long sum = 1;

  for(int i = 0; i < M; i++){
    cin >> v.at(i);
    if(i > 0 && v.at(i) - 1 == v.at(i - 1)){
      sum = 0;
    }
  }

  for(int i = 0; i < M; i++){
    long long stage = (v.at(i) - 1) - now;
    long long tsum = 0;
    //cout << "stage " << stage << endl;
    for(int j = 0; j <= stage / 2; j++){
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
  for(int j = 0; j <= stage / 2; j++){
    long long temp = stage - j;
    tsum += comb(temp, j);
    //cout << "j " << j << "tsum " << tsum << endl;
  }
  sum *= tsum;

  cout << sum % 1000000007 << endl;

  return 0;
}
