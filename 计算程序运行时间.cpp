#include<stdio.h>
#include<time.h>
#include<math.h>
//第二个函数比第一个函数耗时少一个数量级   但是当x要用户自己输入时
//则第一个函数比第二个函数约快一倍 
double F(int n,double a[],double x)
{
	int i;
	double p = a[0];
	for(i=1;i<=n;i++)
	p +=(a[i]*pow(x,i));
	return p;
}

double f(int n,double a[],double x)
{
	int i;
	double p = a[n];
	for(i=n;i>0;i--)
	p = a[i-1]+ x*p;
	return p;
}

double start1,start2;
double stop1,stop2;
double duration1,duration2;
double ticks1,ticks2;
#define MAXK 1e7
int main()
{
	double a[]={1,2,3,4,5,6,7,8,9,10,11};
	//double x;
	int i;
	//scanf("%f",&x);
	start1=clock();
	for(i=0;i<MAXK;i++)
	F(10,a,1.1);
	stop1=clock();
	duration1=((double)(stop1-start1)/CLK_TCK)/1000;
	ticks1 = double(stop1-start1);
	printf("duration1= %f\n",duration1);
	printf("ticks1= %f\n",ticks1);
	start2=clock();
	for(i=0;i<MAXK;i++)
	f(10,a,1.1);
	stop2=clock();
	duration2=((double)(stop2-start2)/CLK_TCK)/1000;
	ticks2 = double(stop2-start2);
	printf("duration2= %f",duration2);
	printf("ticks2= %f\n",ticks2);
	getchar();
	return 0; 
}
