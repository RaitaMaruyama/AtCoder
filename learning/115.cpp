#include <bits/stdc++.h>
using namespace std;

// 1�l�̃e�X�g�̓_����\���z�񂩂獇�v�_���v�Z���ĕԂ��֐�
// ���� scores: scores.at(i)��i�Ԗڂ̃e�X�g�̓_���������Ă���
// �Ԃ�l: 1�l�̃e�X�g�̍��v�_
int sum(vector<int> scores) {
  // �����Ƀv���O������ǋL
	int sum = 0;

	for(int i = 0; i < scores.size(); i++){
		sum += scores.at(i);
	}

	return sum;
}

// 3�l�̍��v�_����v���[���g�̗\�Z���v�Z���ďo�͂���֐�
// ���� sum_a: A�N�̃e�X�g�̍��v�_
// ���� sum_b: B�N�̃e�X�g�̍��v�_
// ���� sum_c: C�N�̃e�X�g�̍��v�_
// �Ԃ�l: �Ȃ�
void output(int sum_a, int sum_b, int sum_c) {
  // �����Ƀv���O������ǋL
	cout << sum_a * sum_b * sum_c << endl;
}

// -------------------
// ���������͕ύX���Ȃ�
// -------------------

// N�̓��͂��󂯎���Ĕz��ɓ���ĕԂ��֐�
// ���� N: ���͂��󂯎���
// �Ԃ�l: �󂯎����N�̓��͂̔z��
vector<int> input(int N) {
  vector<int> vec(N);
  for (int i = 0; i < N; i++) {
    cin >> vec.at(i);
  }
  return vec;
}

int main() {
  // �Ȗڂ̐�N���󂯎��
  int N;
  cin >> N;

  // ���ꂼ��̃e�X�g�̓_�����󂯎��
  vector<int> A, B, C;
  A = input(N);
  B = input(N);
  C = input(N);

  // �v���[���g�̗\�Z���o��
  output(sum(A), sum(B), sum(C));
}
