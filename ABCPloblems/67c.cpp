#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> v(N);
  int sum = 0;

  for(int i = 0; i < N; i++){
    cin >> v[i];
    sum += v[i];
  }

  int now = 0;
  int a = 0, b = 0;

  for(int i = 0; i < N; i++){
    now += v[i];
    if(now > sum / 2){
      if(i == 0){
        b = now;
        cout << abs(sum-(b*2)) << endl;
      }
      else if(i == N-1){
        a = now - v[i];
        cout << abs(sum-(a*2)) << endl;
      }
      else{
        a = now - v[i];
        b = now;
        cout << min(abs(sum-(a*2)), abs(sum-(b*2))) << endl;
      }
      break;
    }
  }

  return 0;
}
