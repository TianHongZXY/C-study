#include<stdio.h>
#include<string.h>
int main()
{	int N;
	int n=0;
	int x;
	do{
	scanf("%d",&N);
	if(N<=0||N>1000){
	printf("exit\n");
	return -1;}
	int count[N];
	
	int t;
	for(int y=0;y<N;y++){
		count[N]=0;
	}
	int max=count[0];
	char color[N][15];
	for(int i=0;i<N;i++)
	{
		scanf("%s",&color[i][15]);//输入N个颜色  
	}
	for(int j=0;j<N;j++)           //N个颜色从第一个和后面所有的颜色一一对比 如果相同一次则该颜色序号+1
	{		for(int k=j+1;k<N;k++) 
			{
			x=strcmp(color[j],color[k]);
			if(x==0)
			count[j]++;
			}
		/*if(count[j]>N/2)	//若color[j]已出现超过一半次数 直接输出color[j] 
		{printf("%s\n",color[j]);
		break;}*/
	}
	
	for(int h=1;h<N;h++)    //若出现最多的次数不足一半
		{
			if(count[h]>max)
			{max=count[h];
			t=h;}
		}
	printf("%s\n",color[t]);	
	

}while(N!=0);
	return 0;
} 
