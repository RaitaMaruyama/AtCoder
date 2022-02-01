#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
  int H, W;
  cin >> H >> W;
  vector<vector<char>> a(100, vector<char>(101));
  vector<vector<char>> b(102, vector<char>(102));

  for(int i = 0; i < H; i++){
    for(int j = 0; j < W; j++){
      cin >> a.at(i).at(j);
    }
  }

  for(int i = 0; i < H+2; i++){
    for(int j = 0; j < W+2; j++){
      b.at(i).at(j) = '#';
    }
  }

  for(int i = 0; i < H; i++){
    for(int j = 0; j < W; j++){
      b.at(i+1).at(j+1) = a.at(i).at(j);
    }
  }

  for(int i = 0; i < H+2; i++){
    for(int j = 0; j < W+2; j++){
      cout << b.at(i).at(j);
    }
    cout << endl;
  }

  return 0;
}
