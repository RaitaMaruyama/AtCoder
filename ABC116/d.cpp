#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, K;

  cin >> N >> K;

  map<int, vector<int>> mp;
  for (size_t i = 0; i < N; i++) {
    int t, d;
    cin >> t >> d;
    mp[t].push_back(d);
  }

  //maxesとothersに値を入れる
  vector<int> maxes, others;
  for(auto& p : mp){
    auto nums = p.second;
    sort(nums.rbegin(), nums.rend());
    maxes.push_back(nums[0]);
    for(int i=1; i<nums.size(); i++) others.push_back(nums[i]);
  }

  sort(maxes.rbegin(), maxes.rend());
  sort(others.rbegin(), others.rend());

  //maxesとothersの累積和
  vector<int64_t> maxes_s(N+1, 0), others_s(N+1, 0);
  for(int i = 0; i < maxes.size(); i++){
    maxes_s[i+1] = maxes_s[i] + maxes[i];
  }
  for(int i = 0; i < others.size(); i++){
    others_s[i+1] = others_s[i] + others[i];
  }

  int kmax = min(K, (int) mp.size());
  int64_t ans = 0;
  for(int64_t k = 1; k <= kmax; k++){
    int64_t result = maxes_s[k] + others_s[K-k] + k * k;
    ans = max(ans, result);
  }

  cout << ans << endl;
  return 0;
}
