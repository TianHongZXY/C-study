#include<stdio.h>
main()
	
{	
	int ai[]={0,1,2,3,4,5,6,7};
	int *p =&ai[0];
	void *q=(void*)p;
	printf("q=%p\n",q);
	printf("*p=%d\n",*(p+2));
	printf("p=%p\n",p);
	
	
	
	printf("*p++=%d\n",*p++);
	printf("p=%p\n",p);
	return 0;
}
