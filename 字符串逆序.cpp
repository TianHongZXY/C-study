#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
     int i,j,n;
     scanf("%s",a);
     b[n=strlen(a)]='\0';//计算字符串长度，并确定字符b的结束位置 
     for(i=0,j=n-1;i<n;i++)//把a逆序赋值给b 
       b[j--]=a[i];
     puts(b);//输出s2 
     return 0;
}  
