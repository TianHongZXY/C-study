#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
     int i,j,n;
     scanf("%s",a);
     b[n=strlen(a)]='\0';//�����ַ������ȣ���ȷ���ַ�b�Ľ���λ�� 
     for(i=0,j=n-1;i<n;i++)//��a����ֵ��b 
       b[j--]=a[i];
     puts(b);//���s2 
     return 0;
}  
