#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
  int N;
  cin >> N;
  int a;
  vector<int> rate(9);
  int min = 0;
  int max;

  for(int i = 0; i < N; i++){
    cin >> a;
    if(a < 3200){
      rate.at(a / 400)++;
    }
    else{
      rate.at(8)++;
    }
  }

  for(int i = 0; i < 8; i++){
    if(rate.at(i)){
      min++;
    }
  }

  max = min + rate.at(8);

  cout << (min==0?1:min) << " " << max << endl;

  return 0;
}
