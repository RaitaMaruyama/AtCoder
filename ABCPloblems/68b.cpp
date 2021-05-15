#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
  int N;
  cin >> N;
  int ans = 1;
  int max = 0;

  for(int i = 1; i <= N; i++){
    int now = i;
    int j = 0;
    while(1){
      if(now % 2 == 0){
        j++;
        now /= 2;
      }
      else{
        if(j > max){
          ans = i;
          max = j;
        }
        break;
      }
    }
  }

  cout << ans << endl;

  return 0;
}
