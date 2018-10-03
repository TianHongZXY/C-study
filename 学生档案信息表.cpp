#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#define M 100
typedef struct {
	int num;
	char name[20];
	char sex[10];
	char addr[20];
}node;

typedef struct {
    node stu[M];
    int last;
	}sequenlist;
sequenlist *L;

sequenlist*Create(){
    int i=0;
    node student;
    L=(sequenlist*)malloc(sizeof(sequenlist));
    L->last=-1;
    while(1){
    printf("输入学生的学号(输入0结束)：");
    scanf("%d",&student.num);
    fflush(stdin);
    if(student.num == 0)
		break;
	else{
		//printf("输入姓名 性别 地址： ");
		//scanf("%s %s %s",&student.name,&student.sex,&student.addr);
		printf("\n姓名：");
		gets(student.name);
		printf("\n性别：");
		gets(student.sex);
		printf("\n地址：");
		gets(student.addr); 
		L->stu[i++] = student;
        L->last++;
    }
      return L;
} //Create
}
void Insert(sequenlist *L,node student){
	int i,j;
	for(i=0;i<L->last;i++)
		if(strcmp(student.name,L->stu[i].name)<0)
	 		break;
	 	for(j=L->last;j>=i;j--)
	 		L->stu[j+1] = L->stu[j];
	 	L->stu[i] = student;
	 	printf("操作成功！");
	 	L->last++;
	} //Insert

int Delete(sequenlist *L,int n){
	int i,j;
	for(i=0;i<=L->last;i++)
		if(L->stu[i].num==n)
	 	break;
	if(i>L->last){
		printf("Not found!");
		return 0;
		}
	else{
		for(j=i;j<L->last;j++)
			L->stu[j]=L->stu[j+1];
		L->last--;
		printf("操作成功！");
		return 1;
		}
	}//Delete学号为n的学生
void Search(sequenlist *L,char name[]){
	int i;
	for(i=0;i<=L->last;i++)
		if(strcmp(L->stu[i].name,name)==0){
			printf("\n 学号：%d",L->stu[i].num);
			printf("\n 姓名：%s",L->stu[i].name);
			printf("\n 性别：%s",L->stu[i].sex);
			printf("\n 地址：%d",L->stu[i].addr);
			break;
		}
	if(i>L->last)
		printf("Not found!\n");
}//查找姓名相符的同学 

void Output(sequenlist *L){
	int i;
	for(i=0;i<L->last;i++){
		printf("\n 学号：%d",L->stu[i].num);
		printf("\n 姓名：%s",L->stu[i].name);
		printf("\n 性别：%s",L->stu[i].sex);
		printf("\n 地址：%d",L->stu[i].addr);
		}
}//输出所有学生信息 

int main(){
    int x;
    int i;
    printf("你需要输入一些学生信息\n"); 
    L=Create();
    printf("输入你想要进行的操作，按0退出操作\n");
    printf("1.新建学生信息\n");
	printf("2.删除学生信息\n");
	printf("3.查找学生信息\n");
	printf("4.查看所有学生信息\n"); 
	scanf("%d",&x);
	fflush(stdin); 
	while(x){
	switch(x)	{
		case 1:	int i; 
				node student;
				printf("学号：");
				gets((char*)student.num);
				//scanf("%d",&student.num);
				printf("\n姓名：");
				gets(student.name);
				//scanf("%s",&student.name);
				printf("\n性别：");
				gets(student.sex);
				//scanf("%s",&student.sex);
				printf("\n地址：");
				gets(student.addr);
				//scanf("%s",&student.addr); 
				Insert(L,student);
				break;
				
		case 2: int j;
				printf("选择你想删除的学生的学号：");
				scanf("%d",&j);
				Delete(L,j);
				break;
				
		case 3: int k;
				char name[20];
				printf("输入你想查找的学生姓名：");
				Search(L,name);
				break;
				
		case 4: int l;
				Output(L);
				break;
				}
		printf("按1,2,3,4键重复操作或按0键退出...\n");
		scanf("%d",&x);
			}
	printf("您已退出。"); 
	return 0;
}
