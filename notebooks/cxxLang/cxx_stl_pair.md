# STL Pair
## 1. STL pair介绍
pair是一种模板类型，其中包含两个元素，可以是不同的数据类型。pair可以配合关联容器使用，当函数需要返回两个值时，可以使用pair构造。pair的底层是一个struct。
## 2. STL pair的使用
### 2.1 STL pair的声明
```c++ {.line-numbers}
#include<utility>
 
pair<typename,typename> var; //创建一个空的pair对象（使用默认构造），它的两个元素分别是T1和T2类型，采用值初始化。
var.first; //获取第一个元素
var.second; //获取第二个元素
var = make_pair(var1,var2); //初始化pair对象，它的两个元素分别是var1和var2。

pair<typename,typename> var(var1, var2);    //创建一个pair对象，它的两个元素分别是T1和T2类型，其中first成员初始化为v1，second成员
```

### 2.2 STL pair的插入数据
```c++ {.line-numbers}
pair<int,string> var;
var.first = 1;
var.second = "hello";
```