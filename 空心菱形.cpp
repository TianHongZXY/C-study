#include<stdio.h>
int main()
{	int i;
	int h;
	int j;
	printf("ÇëÊäÈëÁâÐÎ±ß³¤i=");
	scanf("%d",&i);
	for(h=i;h>=1;h--)
	{   for(j=1;j<=2*i-1;j++)
		{  
        	if(h==j||j==2*i-h)
			{  
            printf("*");  
        	}
			else
			{  
            printf(" ");  
        	}
        	
   		}printf("\n");
	}
	for(h=2;h<=i;h++)
	{   for(j=1;j<=2*i-1;j++)
		{  
        	if(h==j||j==2*i-h)
			{  
            printf("*");  
        	}
			else
			{  
            printf(" ");  
        	}
   		}
   		printf("\n");
	}
	return 0;
	
}
