#include <bits/stdc++.h>

using namespace std;

struct School {
	string name;//校名
	double scores=0;//总分
	int n=0;//学生数

};
map<string,School> mp;
inline bool cmp(School s1,School s2) {

	//首先根据分数进行排序
	if(int(s1.scores)>int(s2.scores))
		return true;
	else if(int(s1.scores)<int(s2.scores))
		return false;
	else {
		//其次根据人数进行排序
		if(s1.n<s2.n)
			return true;
		else if(s1.n>s2.n)
			return false;
		else {
			//最后根据学校名称进行排序
			if(s1.name<s2.name)
				return true;
			else
				return false;
		}

	}
}
int main() {
	int n;
	cin>>n;
	for (int i=0; i<n; i++) {
		string id,sname;
		int score;
		cin>>id>>score>>sname;
//		cout<<"id: "<<id<<" "
//		<<"name: "<<sname<<" "
//		<<"score: "<<score<<endl;
		transform (sname.begin (), sname.end (), sname.begin (), ::tolower);
		mp[sname].name=sname;
//		cout<<mp[sname].name<<" scores: "<<mp[sname].scores<<endl;
		if(id[0]=='A')
			mp[sname].scores+=score;
		else if(id[0]=='B')
				mp[sname].scores+=score/1.5;
		else
			mp[sname].scores+=score*1.5;
//		cout<<mp[sname].name<<" scores: "<<mp[sname].scores<<endl;
		mp[sname].n++;
	}
	vector<School> v;
	for(auto &s : mp) {
		v.push_back(s.second);
	}
	sort(v.begin(),v.end(),cmp);
	cout << v.size() << endl;
	int rank = 1;
	cout << rank << ' ' << v[0].name << ' ' << int(v[0].scores) << ' ' << v[0].n << endl;
	for (int i = 1; i < v.size(); i++) {
		//如果后一名的分数与前一名不同，该名词则为序列号+1的名次
		if (int(v[i].scores) != int(v[i - 1].scores))
			rank = i + 1;
		cout << rank << ' ' << v[i].name << ' ' << int(v[i].scores) << ' ' << v[i].n << endl;
	}
	return 0;
}

