#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define maxsize 1024
typedef char datatype;
typedef struct {
    datatype data[maxsize];
    int last;
}sequenlist;
sequenlist *L;

sequenlist*Create(){
    int i=0;
	char ch;
    L=(sequenlist*)malloc(sizeof(sequenlist));
    L->last=-1;
    printf("输入L元素，直到输入#结束.\n");
    while((ch=getche())!='#'){
        L->data[i++]=ch;
        L->last++;
        fflush(stdin);
    }
      return L;
} //Create

int Insert(sequenlist *L,char x,int i){
	int j;
	if((L->last)>=maxsize-1){
		printf("overflow\n");
		return 0;
	}
	else if ((i<1)||(i>(L->last)+2)){
		printf("error\n");
		return 0;
	}
	else {
		for(j=L->last;j>=i-1;j--)
			L->data[j+1]=L->data[j];
		L->data[i-1]=x;
		L->last=L->last + 1;
		 
	}
	return 1;
} //Insert

void Output(sequenlist *L){
	int i;
	printf("\n顺序表L中的元素为：");
	for(i=0;i<=L->last;i++)
		printf("%c",L->data[i]);
	printf("\n"); 
}
int main(){
    char ch;
    int i,ret;
    L=Create();
    
    printf("\n请输入插入字符："); 
	scanf("%c",&ch);
	printf("\n请输入插入位置："); 
	scanf("%d",&i);
    ret = Insert(L,ch,i);
    if(ret)
     Output(L);
}
