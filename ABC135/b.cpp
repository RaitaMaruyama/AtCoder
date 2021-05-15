#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> v(N);

  for(int i = 0; i < N; i++){
    cin >> v.at(i);
  }

  int cnt = 0;

  for(int i = 0; i < N-1; i++){
    if(v.at(i) > v.at(i+1) && cnt == 0){
      cnt++;
      for(int j = i+1; j < N-1; j++){
        if(v.at(j) > v.at(j+1)){
          int temp = v.at(i);
          v.at(i) = v.at(j+1);
          v.at(j+1) = temp;
        }
      }
    }
  }

  int flag = 0;
  for(int i = 0; i < N-1; i++){
    if(v.at(i) > v.at(i+1)){
      flag = 1;
    }
  }

  if(flag){
    cout << "NO" << endl;
  }
  else{
    cout << "YES" << endl;
  }

  return 0;
}
