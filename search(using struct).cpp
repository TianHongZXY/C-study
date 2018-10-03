#include<stdio.h>

struct COINS{
	int amount;
	const char *name;
}coins[]={
	{1,"penny"},
	{5,"nickel"},
	{10,"dime"},
	{25,"quarter"},
	{50,"half-dollar"}
};

/*int search(int key,int a[], int len)
{
	int ret = -1;
	for(int i = 0;i<len;i++){
		if(key==a[i]){
			ret = i;
			break;
		}
	}
	return ret;
}*/

int main()
{
	int b;
	scanf("%d",&b);
	for (int i=0;i<sizeof(coins)/sizeof(coins[0]);i++){
		if(b==coins[i].amount){
	
		printf("%s\n",coins[i].name);
		break;		
		}	
	if(i==sizeof(coins)/sizeof(coins[0]))
		printf("no such number");
	
		}
}






