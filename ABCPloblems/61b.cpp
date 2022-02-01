#include <bits/stdc++.h>
using namespace std;

int main(){
	int N, M;
  cin >> N >> M;
  vector<int> v(N+1);
  int a, b;
  for(int i = 0; i < M; i++){
    cin >> a >> b;
    v.at(a)++;
    v.at(b)++;
  }
  for(int i = 1; i <= N; i++){
    cout << v.at(i) << endl;
  }
  return 0;
}
