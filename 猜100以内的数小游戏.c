#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{srand(time(0));
int number=rand()%100+1;
int count=0;
int a;
printf("���Ѿ������һ��1��100֮���������");
do{
	printf("���������ǣ�");
	scanf("%d",&a);
	count++;
	if(a>number){
		printf("��µ���̫���ˡ�");
	} else if(a<number){
		printf("��µ���̫С�ˡ�");
		 
	}
} while(a!=number);
printf("��ϲ�㣬������%d�ξͲµ��˴𰸡�\n",count);
system("pause");
return 0; 
}
