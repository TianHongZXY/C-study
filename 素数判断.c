#include <stdio.h>
main()
{
	int i,x;
	scanf("%d",&x);
	int isPrime =1;
	for(i=2;i<x;i++){
		if(x%i==0){
		
			printf("x���Ա�%d����\n",i);
			isPrime=0;}
	} 
	if(isPrime==1){
		printf("������\n");
		
	}
	else printf("��������\n");
	system("pause");
	return 0; 
}
