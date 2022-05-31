```c++
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a=1.5;
    cout<<ceil(a)<<endl;   //向上取整
    cout<<floor(a)<<endl;   //向下取整
    cout<<round(a)<<endl;   //四舍五入
    //不使用函数
    cout<<(int)a<<endl;  //向下取整
    cout<<(a>(int)a?(int)a+:(int)a)<<endl;   //向上取整
    cout<<(int)(a+0.5)<<endl;//四舍五入
    return ;
}
```