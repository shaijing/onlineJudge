  
#sort()函数

```
可以这样理解，sort第三个参数默认升序，
这个地方是个bool函数。
如果返回值结果为假，那么函数会互换他们的位置
如果返回结果为真，就保持原来的位置不变 。
如果x<y成立，那么就保持不变，否则就交换位置。 

sort(a, a + 10, less<int>());		//升序
sort(a, a + 10, greater<int>());	//降序

```

## 两种常用的排序方法
升序：sort(begin, end, less<data-type>());
降序：sort(begin, end, greater<data-type>())