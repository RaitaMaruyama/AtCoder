#include <bits/stdc++.h>
using namespace std;
int main(){
  int N;
  cin >> N;
  vector<int> L(N);
  int sum = 0;
  string ans = "Yes";

  for(int i = 0; i < N; i++){
    cin >> L.at(i);
    sum += L.at(i);
  }

  for(int i = 0; i < N; i++){
    if(L.at(i) >= sum - L.at(i)){
      ans = "No";
    }
  }

  cout << ans << endl;

}
