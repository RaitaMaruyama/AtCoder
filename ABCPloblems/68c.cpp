#include <bits/stdc++.h>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main(){
  int N, M;
  cin >> N >> M;
  unordered_map<int, int> mp;
  int flag = 0;

  for(int i = 0; i < M; i++){
    int a, b;
    cin >> a >> b;
    mp[a] = b;
  }

  for(auto i = mp.begin(); i != mp.end(); i++){
    if(mp[mp[1]] == N){
      flag = 1;
    }
  }

  if(flag){
    cout << "POSSIBLE" << endl;
  }
  else{
    cout << "IMPOSSIBLE" << endl;
  }

  return 0;
}
