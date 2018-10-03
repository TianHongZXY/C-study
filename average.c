#include <stdio.h>
int main(){
	int number;
	int sum=0;
	int count=0;
	printf("输入任意个数，我会帮你求出它们的平均值。当你决定结束就输入-1\n");
	scanf("%d",&number);
	while(number!=-1){
		sum+=number;
		count++;
		scanf("%d",&number);
	}
	printf("它们的平均值是%f",1.0*sum/count);
	system("pause");
	return 0;
}

