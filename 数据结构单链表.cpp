#include<stdio.h>
#include<stdlib.h>

struct Node_list{
	int Element;
	Node_list *Next;
};

Node_list *ListInit(int *_Val,int _size)//��ʼ���б� 
{
	//int array[_size]; 
	Node_list *head, *s ,*r;
	head = NULL;
	r = NULL;
	int i;
	for(i=0;i<_size;i++){
		s = (Node_list*)malloc(sizeof(Node_list));
		s->Element = _Val[i];//��_Val�����Ԫ�ط������� 
		if(head==NULL) head = s;
		else r->Next = s;
		r=s;}
	if(r != NULL)r->Next = NULL;
	return head;//��������ͷָ�� 
}

Node_list *ListInsert(Node_list *Heap, int _Val, int Pos)
{
	Node_list *s;
	Node_list *p;
	p = Heap;
	s = (Node_list*)malloc(sizeof(Node_list));
	s->Element = _Val;
	int i = 0;
	if(Pos == 0){//���ֱ�Ӳ���������ͷ����0λ�� 
		s->Next = Heap;//��ͷ��Ϊs��s��nextָ��ԭ��ͷ 
		return s;//�����±�ͷs 
	}
	while((i+1) != Pos){//������벻�ڱ�ͷ 
		p = p->Next;//�õ�Ҫ����λ�õ�ֱ��ǰ��������ѭ�� 
		i++;
	}
	s->Next = p->Next;//��Ҫ����λ�õ�ֱ��ǰ����next��Ϊs��next 
	p->Next = s;//Ҫ����λ�õ�ֱ��ǰ����nextָ��s������ɲ��� 
	return Heap;//����ͷָ�� 
}

Node_list * ListDelete(Node_list *Heap, int Pos)
{
	Node_list *p;
	p = Heap;
	int i = 0;
	if(Pos == 0)return Heap->Next;//���ɾ��0λ�ã�����ԭ��ͷָ���next 
	else{
		while((i+1) != Pos){
			p = p->Next;//���Ҫɾ����λ�õ�ֱ��ǰ�� 
		}
	Node_list *q = p->Next;//Ҫɾ����λ�õ�ֱ��ǰ��ָ�� Ҫɾ��λ�õ�next 
	p->Next = q->Next;
	return Heap;
	}
}

int main(int argc, char const *argv[])
{
	const int _size = 5;
	int _Val[] = {0,1,2,3,4};//��ʼ������_Val 
	Node_list *Heap = ListInit(_Val,_size);
	Heap = ListInsert(Heap,10,3);//��λ��3����10������3ǰ�����10 
	Heap = ListDelete(Heap,1);//ɾ��λ��1����ɾ��1 
	int i;
	Node_list *p = Heap;
	for(i=0;i<5;i++){
		printf("%d \n",p->Element);
		p = p->Next;
	}
	system("pause");
	return 0;
}
