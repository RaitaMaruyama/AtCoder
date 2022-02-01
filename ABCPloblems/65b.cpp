#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> v(N+1);

  for(int i = 1; i <= N; i++){
    cin >> v[i];
  }

  int i = 1;
  int cnt = 0;
  int flag = 0;
  for(int j = 1; j <= N; j++){
    cnt++;
    if(v[i] == 2){
      flag = 1;
      break;
    }
    else{
      i = v[i];
    }
  }

  if(flag){
    cout << cnt << endl;
  }
  else{
    cout << "-1" << endl;
  }

  return 0;
}
