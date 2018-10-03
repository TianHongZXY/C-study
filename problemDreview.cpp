#include<stdio.h>
int main()
{	int unsigned T;
	scanf("%d",&T);
	int unsigned num1[3];
	int unsigned n;
	int unsigned k;
	int unsigned i;
	int unsigned j;
	int unsigned output[5];
	for(i=0;i<T;i++){
		scanf("%d %d %d",&num1[0],&num1[1],&num1[2]);
		scanf("%d %d",&n,&k);
		int unsigned random[n];
		for(j=1;j<n;j++){
			random[0]=num1[0];
			random[j]=(random[j-1]*num1[1]+num1[2])%1001;
			}
			for(int h=0;h<n-1;h++){
			int unsigned k=h;
			for(j=k+1;j<n;j++){
			if(random[k]<random[j]){k=j;
			}
			}
			if(k!=h)
			{	int unsigned t;
				t=random[h];
				random[h]=random[k];
				random[k]=t;
			}
			}
			output[i]=random[k-1];
	}
	for(i=0;i<T;i++){
	printf("%d\n",output[i]);
}
	return 0;
}

