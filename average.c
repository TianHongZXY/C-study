#include <stdio.h>
int main(){
	int number;
	int sum=0;
	int count=0;
	printf("��������������һ����������ǵ�ƽ��ֵ�������������������-1\n");
	scanf("%d",&number);
	while(number!=-1){
		sum+=number;
		count++;
		scanf("%d",&number);
	}
	printf("���ǵ�ƽ��ֵ��%f",1.0*sum/count);
	system("pause");
	return 0;
}

