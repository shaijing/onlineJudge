#include <stdio.h>

typedef struct Student{
	char name[10];
	int ch,ma,en,gra;
} stu;

stu s[500],temp;

int main(){
	int n;
	scanf("%d",&n);
	for (int i = 0;i<n;i++){
		scanf("%s %d %d %d",s[i].name,&s[i].ch,&s[i].ma,&s[i].en);
		s[i].gra = s[i].ch+s[i].ma+s[i].en;
	}
	
	for (int i=0;i<n-1;i++){
		for (int j=0;j<n-1;j++){
			if(s[j].gra<s[j+1].gra){
				temp = s[j];
				s[j] = s[j+1];
				s[j+1]=temp;
			}
		}
	}
	for (int i=0;i<n;i++){
		printf("%s %d %d %d\n",s[i].name,s[i].ch,s[i].ma,s[i].en);
	}
	
	return 0;
} 
