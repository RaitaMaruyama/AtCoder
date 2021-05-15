#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
  int N;
  cin >> N;

  vector<int> v(N);
  vector<int> n(N);
  vector<int> ans(N);

  for(int i = 0; i < N; i++){
    cin >> v[i];
  }

  for(int i = 0; i < N; i++){
    if((N - i - 1) % 2 == 0){
      n[i] = (N - i - 1) / 2;
      //cout << "i:" << i << " n[i]:" << n[i] << endl;
    }
    else{
      n[i] = (N - i - 1) / 2 + i + 1;
      //cout << "i:" << i << " n[i]:" << n[i] << endl;
    }
  }

  for(int i = 0; i < N; i++){
    ans[n[i]] = v[i];
  }

  for(int i = 0; i < N; i++){
    if(i == 0){
      cout << ans[i];
    }
    else{
      cout << " " << ans[i];
    }
  }

  cout << endl;

  return 0;
}
