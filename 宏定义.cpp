#include<stdio.h>
#include<string.h>
#define TOUPPER(c) ('a'<=(c)&&(c)<='z'?(c)-'a'+'A':(c))
int main(void)
{
	printf("%s,%d\n",__FILE__,__LINE__);
	printf("%s,%s\n",__DATE__,__TIME__);
	char s[100];
	strcpy(s,"abcd");
	int i=0;
	putchar(TOUPPER(s[++i]));
	return 0;
} 
