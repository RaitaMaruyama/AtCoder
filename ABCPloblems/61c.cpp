#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
  long long int K;
  cin >> N >> K;
  vector<long long int> v(100001);

  for(int i = 0; i < N; ++i){
    int a, b;
    cin >> a >> b;
    v.at(a) += b;
  }
  for(int j = 0; j <= 100001; ++j){
    if(K <= v.at(j)){
      cout << j << endl;
      break;
    }
    K -= v.at(j);
  }
	return 0;
}
