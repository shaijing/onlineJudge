#include<cstdio>
#include<iostream>
using namespace std;
string name[1005];
int cg[1005],mg[1005],eg[1005];
int main(){
    int n,max=-999999,t;//t为最厉害的学生编号，max没有大作用只是一个触发器
    scanf("%d",&n);
    for(int a=0;a<n;a++)cin>>name[a]>>cg[a]>>mg[a]>>eg[a];//输入学生数据
    for(int b=0;b<n;b++){
        if(cg[b]+mg[b]+eg[b]>max){
            max=cg[b]+mg[b]+eg[b];//条件成立更新最高分
            t=b;//更新编号以便查找
        }
    }
    cout<<name[t]<<" "<<cg[t]<<" "<<mg[t]<<" "<<eg[t];
    return 0;
}