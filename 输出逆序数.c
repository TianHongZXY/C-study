#include <stdio.h>
int main()
{
	int a;
	int digit;
	int ret=0;
	scanf("%d",&a);
	while(a>0){
		digit=a%10;
		ret=ret*10+digit;
		a/=10;
	}printf("%d",ret);
	system("pause");
	return 0;
}
