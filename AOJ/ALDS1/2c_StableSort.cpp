#include <bits/stdc++.h>
using namespace std;

struct card{
  char suit;
  int value;
};

int BubbleSort(vector<card> &A, int N){
  int flag = 1;
  while(flag == 1){
    flag = 0;
    for(int j = N-1; j >= 1; j--){
      if(A[j].value < A[j-1].value){
        swap(A[j], A[j-1]);
        flag = 1;
      }
    }
  }
}

int SelectionSort(vector<card> &A, int N){
  for(int i = 0; i < N; i++){
    int minj = i;
    for(int j = i; j < N; j++){
      if(A[j].value < A[minj].value){
        minj = j;
      }
    }
    if(minj != i){
      swap(A[i], A[minj]);
    }
  }
}

int main(){
	int N;
  cin >> N;
  vector<card> Bubble(N), Selection(N);

  for(int i = 0; i < N; i++){
    cin >> Bubble[i].suit >> Bubble[i].value;
    Selection[i] = Bubble[i];
  }

  BubbleSort(Bubble, N);
  SelectionSort(Selection, N);

  for(int i = 0; i < N; i++){
    if(i > 0) cout << " ";
    cout << Bubble[i].suit << Bubble[i].value;
  }
  cout << endl;
  cout << "Stable" << endl;

  int flag = 1;
  for(int i = 0; i < N; i++){
    if(i > 0) cout << " ";
    cout << Selection[i].suit << Selection[i].value;
    if(!(Selection[i].suit == Bubble[i].suit && Selection[i].value == Bubble[i].value)){
      flag = 0;
    }
  }
  cout << endl;
  if(flag) cout << "Stable" << endl;
  else cout << "Not stable" << endl;

}
