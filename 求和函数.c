#include<stdio.h>
void sum(int begin,int end){
	int i;
	int fuck=0;
	for(i=begin;i<=end;i++){
		fuck+=i;
	}
	printf("%d到%d的和是%d\n",begin,end,fuck);
}
main()
{
	int r;
	sum(1,10);
	sum(11,20);
	sum(21,30);
	return 0;
}
