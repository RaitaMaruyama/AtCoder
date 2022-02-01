#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
  int A, B, C, D;
  cin >> A >> B >> C >> D;

  if(A <= C && D <= B){
    cout << D - C << endl;
  }
  else if(C < A && B < D){
    cout << B - A << endl;
  }
  else if(A < C && B < D){
    if(B - C > 0){
      cout << B - C << endl;
    }
    else{
      cout << "0" << endl;
    }
  }
  else if(C < A && D < B){
    if(D - A > 0){
      cout << D - A << endl;
    }
    else{
      cout << "0" << endl;
    }
  }

  return 0;
}
