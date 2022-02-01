#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
  int H, W;
  cin >> H >> W;
  vector<vector<char>> v(H+1, vector<char>(W+1));

  for(int i = 0; i < H; ++i){
    for(int j = 0; j < W; ++j){
      cin >> v.at(i).at(j);
    }
  }

  for(int i = 0; i < W+2; ++i){
    cout << '#';
  }
  cout << endl;
  for(int i = 0; i < H; ++i){
    cout << '#';
    for(int j = 0; j < W; ++j){
      cout << v.at(i).at(j);
    }
    cout << '#' << endl;
  }
  for(int i = 0; i < W+2; ++i){
    cout << '#';
  }

  return 0;
}
