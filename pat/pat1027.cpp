//1027 ��ӡɳ©
#include<iostream>

using namespace std;

int count(int n) { //����n���ַ�����ɵ�����ɳ©������
	int count = 1;
	while (1) {
		if (n >= 2 * count*count - 1)count++;
		else return count - 1;
	}
}

int main() {
	int n;
	char s;
	cin >> n >> s;
	int row = count(n);
	int length = 2 * row - 1;

	for (int i = row; i >= 1; i--) { //������ϰ벿�ֵ�ɳ©
		for (int j = 0; j < (length - (2 * i - 1)) / 2; j++) { //ÿ����������ɿո񱣾���
			cout << ' ';
		}
		for (int j = 0; j < 2 * i - 1; j++) { //ÿ�����2*i-1���ַ�
			cout << s;
		}
		//for (int j = 0; j < (length - (2 * i - 1)) / 2; j++)//ע�ⲻ��Ҫ�������Ŀո�
		//{
		//	cout << ' ';
		//}
		cout << endl;
	}
	for (int i = 2; i <= row; i++) { //������°벿�ֵ�ɳ©��ͬ��
		for (int j = 0; j < (length - (2 * i - 1)) / 2; j++) {
			cout << ' ';
		}
		for (int j = 0; j < 2 * i - 1; j++) {
			cout << s;
		}
		//for (int j = 0; j < (length - (2 * i - 1)) / 2; j++)
		//{
		//	cout << ' ';
		//}
		cout << endl;
	}
	cout << n - (2 * row*row - 1) << endl;//������ʣ����ַ��ĸ���
	return 0;
}
