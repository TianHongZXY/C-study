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
    printf("����ѧ����ѧ��(����0����)��");
    scanf("%d",&student.num);
    fflush(stdin);
    if(student.num == 0)
		break;
	else{
		//printf("�������� �Ա� ��ַ�� ");
		//scanf("%s %s %s",&student.name,&student.sex,&student.addr);
		printf("\n������");
		gets(student.name);
		printf("\n�Ա�");
		gets(student.sex);
		printf("\n��ַ��");
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
	 	printf("�����ɹ���");
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
		printf("�����ɹ���");
		return 1;
		}
	}//Deleteѧ��Ϊn��ѧ��
void Search(sequenlist *L,char name[]){
	int i;
	for(i=0;i<=L->last;i++)
		if(strcmp(L->stu[i].name,name)==0){
			printf("\n ѧ�ţ�%d",L->stu[i].num);
			printf("\n ������%s",L->stu[i].name);
			printf("\n �Ա�%s",L->stu[i].sex);
			printf("\n ��ַ��%d",L->stu[i].addr);
			break;
		}
	if(i>L->last)
		printf("Not found!\n");
}//�������������ͬѧ 

void Output(sequenlist *L){
	int i;
	for(i=0;i<L->last;i++){
		printf("\n ѧ�ţ�%d",L->stu[i].num);
		printf("\n ������%s",L->stu[i].name);
		printf("\n �Ա�%s",L->stu[i].sex);
		printf("\n ��ַ��%d",L->stu[i].addr);
		}
}//�������ѧ����Ϣ 

int main(){
    int x;
    int i;
    printf("����Ҫ����һЩѧ����Ϣ\n"); 
    L=Create();
    printf("��������Ҫ���еĲ�������0�˳�����\n");
    printf("1.�½�ѧ����Ϣ\n");
	printf("2.ɾ��ѧ����Ϣ\n");
	printf("3.����ѧ����Ϣ\n");
	printf("4.�鿴����ѧ����Ϣ\n"); 
	scanf("%d",&x);
	fflush(stdin); 
	while(x){
	switch(x)	{
		case 1:	int i; 
				node student;
				printf("ѧ�ţ�");
				gets((char*)student.num);
				//scanf("%d",&student.num);
				printf("\n������");
				gets(student.name);
				//scanf("%s",&student.name);
				printf("\n�Ա�");
				gets(student.sex);
				//scanf("%s",&student.sex);
				printf("\n��ַ��");
				gets(student.addr);
				//scanf("%s",&student.addr); 
				Insert(L,student);
				break;
				
		case 2: int j;
				printf("ѡ������ɾ����ѧ����ѧ�ţ�");
				scanf("%d",&j);
				Delete(L,j);
				break;
				
		case 3: int k;
				char name[20];
				printf("����������ҵ�ѧ��������");
				Search(L,name);
				break;
				
		case 4: int l;
				Output(L);
				break;
				}
		printf("��1,2,3,4���ظ�������0���˳�...\n");
		scanf("%d",&x);
			}
	printf("�����˳���"); 
	return 0;
}
