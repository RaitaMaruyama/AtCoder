#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> v(N);
  int sum = 0;
  int tsum = 0;
  int tsum1, tsum2;

  for(int i = 0; i < N; i++){
    cin >> v.at(i);
    sum += v.at(i);
  }

  for(int i = 0; i < N; i++){
    if(tsum + v.at(i) >= sum / 2){
      tsum1 = tsum;
      tsum2 = tsum + v.at(i);
      break;
    }
    tsum += v.at(i);
  }

  cout << min((sum - tsum1) - tsum1, tsum2 - (sum - tsum2)) << endl;

  return 0;
}
