#include<stdio.h>
float fun(int);
int main(void){
	int n;
	scanf("%d",&n);
	printf("%f",fun(n));
} 
float fun (int x){
	float s=0;
	for( int i=1;i<=x;i++){
		float k=0;
		k=k+i;
		s+=1.0/k;
	}
	return s;
}
