#include <bits/stdc++.h>
using namespace std;
int main(){
  int N, M;
  cin >> N >> M;
  vector<int> X(M);

  for(int i = 0; i < M; i++){
    cin >> X.at(i);
  }

  sort(X.begin(), X.end());

  vector<int> dis(M-1, 0);
  for(int i = 0; i < M-1; i++){
    dis.at(i) = X.at(i+1) - X.at(i);
  }

  sort(dis.begin(), dis.end());

  int ans = 0;

  for(int i = 0; i < M - N; i++){
    ans += dis.at(i);
  }

  cout << ans << endl;

}
