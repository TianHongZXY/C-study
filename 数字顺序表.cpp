#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define maxsize 1024
typedef int datatype;
typedef struct {
    datatype data[maxsize];
    int last;
}sequenlist;
sequenlist *L;

sequenlist*Create(){
    int i=0;
	int num;
	int x;
    L=(sequenlist*)malloc(sizeof(sequenlist));
    L->last=-1;
    printf("输入你想要几个元素：\n");
    scanf("%d",&num);
    
    for(;i<num;i++){
    	printf("输入你想要的第%d个元素：",i+1);
    	scanf("%d",&x);
        L->data[i]=x;
        L->last++;
        //fflush(stdin);
    }
      return L;
} //Create

int Insert(sequenlist *L,int x,int i){
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

int Delete(sequenlist *L,int i){
	int j;
	if((i<1)||(i>(L->last+1))){
		printf("error\n");
		return 0;}
	else{
		for(j=i;j<L->last+1;j++){
			L->data[j-1]=L->data[j];
		}
		L->	last--; 
		return 1;
	}
	}//Delete第i个元素 即Delete L->data[i-1]; 

void Output(sequenlist *L){
	int i;
	printf("\n顺序表L中的元素为：");
	for(i=0;i<=L->last;i++)
		printf("%d\t",L->data[i]);
	printf("\n"); 
}
int main(){
    int x;
    int i,ret;
    L=Create();
    printf("\n请输入你想要插入的数字："); 
	scanf("%d",&x);
	printf("\n请输入你想要插入的位置："); 
	scanf("%d",&i);
    ret = Insert(L,x,i);
    if(ret)
     Output(L);
    
	printf("\n请输入你想要删除的位置："); 
	scanf("%d",&i);
    ret = Delete(L,i);
    if(ret)
     Output(L);
}
