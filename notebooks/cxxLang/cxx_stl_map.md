# STL Map
## 1. STL map介绍
map是STL中的一个关联容器，和python中的数据类型字典一样，map 类型变量中的元素也是由键-值对组成，没有重复的键。其底层实现是红黑树（非严格意义上的平衡二叉树）

## 2. STL map的使用
### 2.1 STL Map的声明
```c++ {.line-numbers}
#include<map>
 
map<key,value> var;
```
### 2.2 STL Map的插入数据
1. 用insert函数插入
2. 用给Key赋value的方法插入
```c++ {.line-numbers}
#include<iostream>
#include<map>
using namespace std;
 
int main() {
    map<int,string> student;
    /*（1）*/
    student.insert(pair(001,"Zhang san"));
    student.insert(pair(002,"Li San"));
    /*(2)*/ 
    student[001] = "Zhang san";
    student[002] = "Li San";
 
    return 0;
 
}
```

### 2.3 查找map变量中的某个key
1.  map变量.count(key)只返回0或1，0表示map变量中不 包含key这个键，1则表示包括
```c++ {.line-numbers}
if(student.count(001) > 0){
    return student[001];
}else{
    return NULL;
}
```
2. map变量.find(key) 返回一个迭代器，该迭代器指向查询到的这个key元素(存在key这个元素的时候)

```c++ {.line-numbers}

map<int,string> ::iterator it;
it = student.find(001);
return it->second;

```
> 迭代器名称->first  表示迭代器当前指向的元素的key;   迭代器名称->second 表示迭代器当前指向的元素的value;

### 2.4 删除map变量中的元素、清空map变量
1. 删除元素用erase函数，删除成功返回1，否则返回0
```c++ {.line-numbers}
//配合使用迭代器删除
it = student.find(001);
int ans = student.erase(it);
 
 
//直接删
int ans = student.erase(001);
```
2. 清空map变量之间使用clear函数

```c++ {.line-numbers}
student.clear();
```


## 3. STL unordered_map的使用
1. unordered_map与map的区别
1.1 使用前需要引入的头文件不同，前者是 #include<unordered_map> ,后者是 #include<map>
1.2  内部实现机理不同，前者是哈希表，后者是红黑树
1.3 map类型变量中元素是自动排序，有序的，而unordered_map类型变量中的元素是无序的
2. make_pair()与pair()

```c++ {.line-numbers}
int main(int argc, char** argv) {
 
	pair <string,double> product1 ("tomatoes",3.25);
	pair <string,double> product2;
	pair <string,double> product3;
 
	product2.first ="lightbulbs"; // type of first is string
	product2.second =0.99; // type of second is double
	
	product3 = make_pair ("shoes",20.0);
	
	cout <<"The price of "<< product1.first <<" is $"<< product1.second <<"\n";
	cout <<"The price of "<< product2.first <<" is $"<< product2.second <<"\n";
	cout <<"The price of "<< product3.first <<" is $"<< product3.second <<"\n";
 
	return 0;
 
}
```