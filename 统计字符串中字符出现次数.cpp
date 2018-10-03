#include<stdio.h> 
int fun(char*,char);
int main()
{	char ss[100];
	char ch;
	scanf("%s %c",ss,&ch);
//	scanf("%c",&ch);
	printf("%d\n",fun(ss,ch));
	return 0;
}
int fun(char*p,char x){
	int cnt=0;
	int i=0;
	while(p[i]!='\0'){
		if (p[i]==x){
		cnt++;
		}
		i++;
	}
	return cnt;
}

