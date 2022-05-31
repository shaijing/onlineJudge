#include<iostream>
#include<string>
#include<sstream>

using namespace std;

string compress(string s) { //ѹ��
	string com = "",tep;
	stringstream ss;
	int count = 1;
	//�Ա�ǰһ���ַ����һ���ַ��Ƿ���ͬ����ͬ������1������ͬ�Ļ�֤������һ���ַ�������ǰ�������ַ��ĸ�����Ϊһ���ַ�������ǰ���ַ����Ϊ������+�ַ�����ʽ��Ҫע���������Ϊ1��֤������һ���������ַ���ǰ�治��Ҫ1
	for (int i = 1; i < s.length(); i++) {
		if (s[i] == s[i - 1])
			count++;
		else {
			if (count == 1) {
				com += s[i-1];
				continue;
			}
			//����1��ʱ��ʹ��stringstream������ת��Ϊ�ַ�
			ss << count;
			ss >> tep;
			com += tep;//������
			com += s[i-1];
			ss.clear();
			count = 1;
		}
	}
	//��Ҫ�ж��������
	if (count == 1) {
		com += s[s.length() - 1];
		return com;
	}
	ss << count;
	ss >> tep;
	com += tep;
	com += s[s.length() - 1];
	return com;
}

string decompress(string s) {
	string dec = "";
	stringstream ss;
	int f=0;//��¼���ֵ�����λ��
	if (!(s[0] >= '0'&&s[0] <= '9')) { //�����λ��������
		dec += s[0];
	}
	//�ӵڶ�λ��ʼ�ж�
	for (int i = 1; i < s.length(); i++) {
		if (!(s[i] >= '0'&&s[i] <= '9')) { //�ҵ�ֱ���������ֵ�ʱ��
			if (!(s[i - 1] >= '0'&&s[i - 1] <= '9')) { //���ǰһλ�������֣�֤������ǵ�������ĸ
				dec += s[i];
				f = i + 1;//���ֵ���λ�ݶ�Ϊ��һλ
				continue;
			} else { //���ǰһλ�����֣�֤����һ���ظ�����ĸ
				string plus=s.substr(f, i-f);//�����ִ�����,�����ַ���ת��Ϊ����,�˺����Ƿ���s���Ӵ�����f��ʼ����i-f�������ַ�
				ss << plus;
				int p;
				ss >> p;
				ss.clear();
				string plu(p, s[i]);//���쳤��Ϊp�ַ�Ϊs[i]���ַ�
				dec += plu;
				//���ֵ���λ�ݶ�Ϊ��һλ
				f = i + 1;
			}
		}
	}
	return dec;
}

int main() {
	char c;
	string s;
	cin >> c;
	getchar();
	getline(cin, s);
	if (c == 'C') {
		cout << compress(s);
	} else {
		cout << decompress(s);
	}
	return 0;
}
