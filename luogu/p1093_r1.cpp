#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long long int i,calc[20000],x,y,z,n;
    cin >>n;
    for (i=1;i<=n;i++){
        cin >>x>>y>>z;
        calc[i]=(x+y+z)*100000000+x*100000+99999-i;
    }
    sort(calc+1,calc+n+1);
    for (i=n;i>n-5;i--) cout <<99999-calc[i]%100000<<' '<<calc[i]/100000000<<endl;
}
