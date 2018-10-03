#include<stdio.h> 
int printn(int n){
	int i;
	for(i=1;i<=n;i++){
		printf("%d\n",i);
	}
	return 0;
}
/*
int printN(int n){
	if(n){
		printN(n-1);
		printf("%d\n",n);
		
	}
	return 0;
}*/

int main()
{
	int n;
	scanf("%d",&n);
	printn(n);
	return 0;
}


