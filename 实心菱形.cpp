#include<stdio.h>
main()
{ int i,j;
int n;
scanf("%d",&n);
for(i=0;i<=n+1;i++)
{ for(j=n-i;j>=0;j--)
printf(" ");
for(j=0;j<i;j++)
printf("* ");
printf("\n"); }
for(i=0;i<n;i++)
{ for(j=0;j<i+1;j++)
printf(" ");
for(j=n-i;j>0;j--)
printf("* ");
printf("\n"); }
}
