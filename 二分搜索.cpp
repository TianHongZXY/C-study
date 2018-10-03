#include<stdio.h>

int search(int k, int a[], int len)
{ 
	int left = 0;
	int right = len-1;
	int ret =-1;
	while(right >= left)
	{
		int mid = (left+right)/2;
		if(a[mid]==k)
		{
			ret = mid;
			break;
		}else if (a[mid]>k)
		{
			right = mid-1;
		}else{
			left = mid+1;
		}
	}
	return ret;
} 

int main()
{
	int a[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	int b;
	scanf("%d",&b);
	printf("%d",search(b,a,20));
	return 0;
}





