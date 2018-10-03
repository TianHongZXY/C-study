#include<stdio.h>

int *gall;

int main(void)
{
	printf("in %s gall=%p",__func__,gall);
	return 0;
}
