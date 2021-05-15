#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
  int H, W;
  cin >> H >> W;

  vector<vector<char>> v(H, vector<char>(W));
  vector<vector<int>> L(H, vector<int>(W));
  vector<vector<int>> R(H, vector<int>(W));
  vector<vector<int>> D(H, vector<int>(W));
  vector<vector<int>> U(H, vector<int>(W));
  vector<vector<int>> Light(H, vector<int>(W));

  int lmax = 0;

  for(int i = 0; i < H; i++){
    for(int j = 0; j < W; j++){
      cin >> v[i][j];
    }
  }

  for(int i = 0; i < H; i++){
    for(int j = 0; j < W; j++){
      if(v[i][j] == '#'){
        L[i][j] = 0;
      }
      else if(j == 0){
        L[i][j] = 1;
      }
      else{
        L[i][j] = L[i][j-1] + 1;
      }

      if(v[i][W-j-1] == '#'){
        R[i][W-j-1] = 0;
      }
      else if(j == 0){
        R[i][W-j-1] = 1;
      }
      else{
        R[i][W-j-1] = R[i][W-j] + 1;
      }

      if(v[i][j] == '#'){
        U[i][j] = 0;
      }
      else if(i == 0){
        U[i][j] = 1;
      }
      else{
        U[i][j] = U[i-1][j] + 1;
      }

      if(v[H-i-1][j] == '#'){
        D[H-i-1][j] = 0;
      }
      else if(i == 0){
        D[H-i-1][j] = 1;
      }
      else{
        D[H-i-1][j] = D[H-i][j] + 1;
      }
    }
  }

  for(int i = 0; i < H; i++){
    for(int j = 0; j < W; j++){
      //cout << i << " " << j << endl;
      Light[i][j] = L[i][j] + R[i][j] + D[i][j] + U[i][j] - 3;
      lmax = max(lmax, Light[i][j]);
      //cout << "L" << L[i][j] << " R" << R[i][j] << " D" << D[i][j] << " U" << U[i][j] << " Light" << Light[i][j] << endl << endl;
    }
  }

  cout << lmax << endl;

  return 0;
}
