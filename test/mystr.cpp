#include <string>
#include <iostream>
using namespace std;
void test();
void test1();
void test2();
void test3();
int main(int argc, char** argv) {
	test3();
	return 0;
}

void test() {
	string s1;
	string s2("This is string 2.");
	string s3(s2); //拷贝构造
	string s4(10, 'x'); //指定长度和字符构造
	std::cout << s3 << std::endl;
}

void test1() {
	string s("This is string");
	cout << s.size() << endl;//返回字符串有效长度
	cout << s.length() << endl;//返回字符串有效长度
	cout << s.capacity() << endl;//返回空间大小
	cout << s << endl;
	//s.clear();//清空字符串
	//s.empty();//判断字符串是否为空,为空返回trrue,否则返回false
	s.resize(19, 'a');//将s的有效字符设置为10,多余的位置用'a'填充
	//s.resize(15); //将s的有效字符增加15个,多余的位置用'\0'填充

	cout << s.size() << endl;//返回字符串有效长度
	cout << s.length() << endl;//返回字符串有效长度
	cout << s.capacity() << endl;//返回空间大小
	cout << s << endl;

	string s1;
	s1.reserve(100);//设置空间大小
	cout << s1.capacity() << endl;//返回空间大小
	s1.reserve(50);//当空间小于string底层空间大小时,不会减小
	cout << s1.capacity() << endl;//返回空间大小
	s1 = "This is string";
	cout << s1 << endl;
}

void test2() {

	string s = "This is string";
	s[0] = 't';
	cout << s << endl;

	//1 for and operator[]
	for (int i = 0; i < s.size(); i++) {
		cout << s[i] << endl;
	}

	//2 forward iterator
	string::iterator it = s.begin();
	while (it != s.end()) {//end()获取最后一个元素的下一个位置
		cout << *it << endl;
		it++;
	}

	//3 reverse iterator
	string::reverse_iterator rit = s.rbegin();
	while (rit != s.rend()) {
		cout << *rit << endl;
		rit++;
	}

	//4 const iterator
	string::const_iterator cit = s.cbegin();
	while (cit != s.cend()) {
		cout << *cit << endl;
		cit++;
	}


}
void test3() {
	string s;
	s.push_back('a'); //在字符串末尾添加一个字符
	s.append("bcd"); //在字符串末尾添加一个字符串

	s += 'e'; //在字符串末尾添加一个字符
	s += "fgh"; //在字符串末尾添加一个字符串

	s.insert(s.begin(), 'x');//在字符串的指定位置插入一个字符
	s.erase(0, 1);//删除字符串中的指定位置的字符,不包括1

	s.replace(0, 1, "cba");//替换字符串中的指定位置的字符,不包括1
	cout << s << endl;
	cout << s.c_str() << endl; //打印字符串的c风格字符串
}


