#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<long long> A(N+1);
  vector<long long> B(N);
  long long res = 0;
  long long power;
  long long sum = 0;

  for(int i = 0; i < N+1; i++){
    cin >> A.at(i);
    sum += A.at(i);
  }

  for(int i = 0; i < N; i++){
    cin >> B.at(i);
  }

  for(int i = 0; i < N; i++){
    if(A.at(i) > B.at(i)){
      res += A.at(i) - B.at(i);
    }
    else{
      power = B.at(i) - A.at(i);
      if(A.at(i+1) > power){
        A.at(i+1) -= power;
      }
      else{
        A.at(i+1) = 0;
      }
    }
  }
  res += A.at(N);

  cout << sum - res << endl;

  return 0;
}
