#include <stdio.h>
#include <stdbool.h>
#include <string.h>

const char s_year[11] = "1814/09/06";
const char max_year[11]="2014/09/06";

typedef struct Person {
	char name[9];
	char birth[11];
} person;
person p[100001];
bool isvalid(char *);
int main() {
	char t_name[9]= {},t_year[11]= {};
	int n,count=0,max,min;

	scanf("%d",&n);
	for (int i=0; i<n; i++) {
		scanf("%s %s",t_name,t_year);
		if(isvalid(t_year)) {

			strcpy(p[count].name,t_name);
			strcpy(p[count].birth,t_year);
			count++;
		}

	}
	max = min =0;
	for(int i=1; i<count; i++) {
		if(strcmp(p[i].birth,p[max].birth)<0)
			max =i;
		if(strcmp(p[i].birth,p[min].birth)>0)
			min =i;
	}
	if(count==0)
		printf("0");
	else
		printf("%d %s %s\n",count,p[max].name,p[min].name);
	return 0;
}

bool isvalid(char * s) {
	if(strcmp(s,s_year)>=0&&strcmp(s,max_year)<=0)
		return 1;
	else
		return 0;
}
