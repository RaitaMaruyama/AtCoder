#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
bool s[200050] = {};
bool t[200050] = {};

int main(){
  int N, M;
  cin >> N  >> M;

  for(int i = 0; i < M; i++){
    int a, b;
    cin >> a >> b;
    if(a == 1){
      t[b] = true;
    }
    if(b == N){
      s[a] = true;
    }
  }

  for(int i = 0; i < 200050; i++){
    if(s[i] && t[i]){
      cout << "POSSIBLE" << endl;
      return 0;
    }
  }

  cout << "IMPOSSIBLE" << endl;
  return 0;

  return 0;
}
