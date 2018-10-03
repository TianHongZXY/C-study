#include<stdio.h>
int main()
{
	int a;
	for(a=2000;a<=3000;a=a+4)
	{
		if((a%4==0)&&(a%100!=0))
		{printf("%d年是闰年\n",a);continue;}
		else if(a%400==0)
		{printf("%d年是闰年\n",a);continue;}
	}
	return 0;
}
