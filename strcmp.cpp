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
		scanf("%s",&color[i][15]);//����N����ɫ  
	}
	for(int j=0;j<N;j++)           //N����ɫ�ӵ�һ���ͺ������е���ɫһһ�Ա� �����ͬһ�������ɫ���+1
	{		for(int k=j+1;k<N;k++) 
			{
			x=strcmp(color[j],color[k]);
			if(x==0)
			count[j]++;
			}
		/*if(count[j]>N/2)	//��color[j]�ѳ��ֳ���һ����� ֱ�����color[j] 
		{printf("%s\n",color[j]);
		break;}*/
	}
	
	for(int h=1;h<N;h++)    //���������Ĵ�������һ��
		{
			if(count[h]>max)
			{max=count[h];
			t=h;}
		}
	printf("%s\n",color[t]);	
	

}while(N!=0);
	return 0;
} 
