#include<iostream>
#include<vector>

using namespace std;

int M;//����

bool judge(int n) { //�жϷ����Ƿ�Ϸ�
	if (n >= 0 && n <= M)return true;
	else return false;
}

int main() {
	int N;//������������
	cin >> N >> M;
	vector<int> score(N);
	for (int i = 0; i < N; i++) {
		cin >> score[0];
		double G1 = score[0],G2=0,G=0;//��ʦ�ķ���,ѧ���ķ��������յķ���
		int number = 0;
		double sum = 0,max=0,min=50;//��¼�������߷�����ͷ����ܷ�
		//ͳ��ѧ������
		for (int j = 1; j < N; j++) {
			cin >> score[j];
			if (judge(score[j])) { //�������ֺϷ�
				//��¼�����ͷ�
				max = max > score[j] ? max : score[j];
				min = min < score[j] ? min : score[j];
				number++;
				sum += score[j];
			}
		}
		G2 = (sum - max - min) / (number - 2);
		G = (G1 + G2) / 2;
		cout << int(G + 0.5) << endl;//�˴���������
	}
	return 0;
}

