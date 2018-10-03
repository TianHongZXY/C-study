#include<stdio.h>
#include<string.h>
int main()
{
	int N;
	scanf("%d",&N);
	char a[N][15];
	for(int i=0;i<N;i++)
	scanf("%s",a[i]);
	
	int x =strcmp(a[0],a[1]);
	int y =strcmp(a[0],a[2]);
	int z =strcmp(a[1],a[2]);
	printf("x=%d,y=%d,z=%d",x,y,z);
	return 0; 
	
}
