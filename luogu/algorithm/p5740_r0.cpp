#include<bits/stdc++.h>//万能头文件
using namespace std;
int main()
{
    int n,m;//定义
    double MAX=INT_MIN;//用来存储最大值，因为方便，最大值设为INT_MIN
    cin>>n>>m;//输入
    for(int i=1;i<=n;i++)//循环输入
    {
        double tmp[10001],sum=0;//临时数组记录本组内容
        for(int j=1;j<=m;j++)//循环输入
        {
            cin>>tmp[j];    //输入
            sum+=tmp[j];//每次把成绩加到里面
        }
        sort(tmp+1,tmp+m+1);//快排
        sum=sum-tmp[1]-tmp[m];//找到最大最小值，减掉
        sum/=(m-2);//注意算平均分的时候要减去最大、最小值
        if(sum>MAX) MAX=sum;//这里比较大小
    }    
    cout<<fixed<<setprecision(2)<<MAX;//保留两位小数，输出答案
    return 0;    //华丽结束
}