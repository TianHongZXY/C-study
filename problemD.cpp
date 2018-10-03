#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	int num1[3];
	int n,k;
	int i;
	int j;
	int output[5];
	for(i=0;i<T;i++){
		scanf("%d %d %d",&num1[0],&num1[1],&num1[2]);
		scanf("%d %d",&n,&k);
		int random[n];
		for(j=1;j<n;j++){
			random[0]=num1[0];
			random[j]=(random[j-1]*num1[1]+num1[2])%1001;
			}
			for(int h=0;h<n-1;h++){
			int k=h;
			for(j=k+1;j<n;j++){
			if(random[k]<random[j]){k=j;
			}
			}
			if(k!=h)
			{	int t;
				t=random[h];
				random[h]=random[k];
				random[k]=t;
			}
			}
		//	for(int m=0;m<n;m++){
		//		printf("random[%d]=%d\n",m,random[m]);
		//	}
			output[i]=random[k-1];
	}
	for(i=0;i<T;i++){
	
	printf("%d\n",output[i]);
}
	return 0;
}




