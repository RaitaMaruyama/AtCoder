#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> data(5);
  for (int i = 0; i < 5; i++) {
    cin >> data.at(i);
  }

  // data�̒��ŗׂ荇���������v�f�����݂���Ȃ�"YES"���o�͂��A�����łȂ����"NO"���o�͂���
  // �����Ƀv���O������ǋL

	int count = 0;

	for(int i = 1; i < data.size(); i++){
		if(data.at(i-1) == data.at(i)){
			count = 1;
		}
	}

	if(count){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
}
