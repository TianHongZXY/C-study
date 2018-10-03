#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	printf("please input a b c\n");
	scanf("%d %d %d",&a,&b,&c);
	int d=b*b-4*a*c;
	if(d>=0&&a!=0)
	{
		int s=-b/(2*a);
		int t=sqrt(d)/(2*a);
		printf("x1=%d,x2=%d\n",s+t,s-t);
	}
	else if(a==0&&b!=0)
	{printf("The only root x=%d\n",-c/b);
	}
	else if(a==0&&b==0)
	{printf("The equation has no answer\n");
	}
	return 0;
} 


