#include <bits/stdc++.h>
using namespace std;

int MaximumProfit(vector<int> R, int n){
  int minR = INT_MAX;
  int maxp = INT_MIN;
  for(int i = 0; i < n; i++){
    maxp = max(maxp, R.at(i) - minR);
    minR = min(minR, R.at(i));
  }
  return maxp;
}

int main(){
	int n;
  cin >> n;
  vector<int> R(n);

  for(int i = 0; i < n; i++){
    cin >> R.at(i);
  }

  cout << MaximumProfit(R, n) << endl;

}
