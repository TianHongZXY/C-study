#include<stdio.h>
main()
{
	int *p;
	int i;
	p=&i;
	printf("%d\n",i);
	printf("%p\n",&i);
	printf("%p\n",p); 
	*p=2000;
	printf("%d\n",i);
	return 0;
}

 
