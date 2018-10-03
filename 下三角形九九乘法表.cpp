#include<stdio.h>


main()
{
	int i,h;
	for(i=1;i<=9;i++)
	{	for(h=1;h<=i;h++)
		{printf("%d*%d=%d\t",h,i,h*i);
		}
		printf("\n");
	}
	return 0;
}
