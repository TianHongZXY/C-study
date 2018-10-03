#include <stdio.h>
main()
{
	int i,x;
	scanf("%d",&x);
	int isPrime =1;
	for(i=2;i<x;i++){
		if(x%i==0){
		
			printf("x可以被%d整除\n",i);
			isPrime=0;}
	} 
	if(isPrime==1){
		printf("是素数\n");
		
	}
	else printf("不是素数\n");
	system("pause");
	return 0; 
}
