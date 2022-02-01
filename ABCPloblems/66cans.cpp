#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
  int N;
  cin >> N;

  deque<int> deq;

  for(int i = 0; i < N; i++){
    int a;
    cin >> a;
    if(i % 2 == N % 2){
      deq.push_back(a);
    }
    else{
      deq.push_front(a);
    }
  }

  for(int i = 0; i < N; i++){
    if(i == 0){
      cout << deq[i];
    }
    else{
      cout << " " << deq[i];
    }
  }

  return 0;
}
