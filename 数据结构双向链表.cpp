#include<stdio.h>
#include<stdlib.h>

struct DoubleList{
	int _Value;
	DoubleList *Pre;
	DoubleList *Next;
};

DoubleList *DoubleListInit(int *_Val, int _size)
{
	DoubleList *s, *head,*t;
	head = (DoubleList*)malloc(sizeof(DoubleList));
	s = NULL;
	t = NULL;
	int i;
	for(i=0;i<_size;i++){
		s = (DoubleList*)malloc(sizeof(DoubleList));
		s->_Value = _Val[i];
		printf("%d \n",s->_Value);
		if(i==0){
			head->Next = s;
			t = s; //��¼sλ��
		}
	t->Next = s; //��һ��s��nextָ���µ�s
	s->Pre = t; //�µ�s��preָ����һ��s
	t = s; //��¼��s��λ��
	}
	return head; // ����ͷָ�룬ע��ͷָ���ﲻ��Ԫ�أ�Ԫ�ش�head->Next��ʼ
}

DoubleList *DoubleListInsert(DoubleList *Heap, int _Val, int Pos)
{
	DoubleList *s, *p;
	p = Heap->Next; //��¼��һ��Ԫ�ص�λ��
	s = (DoubleList*)malloc(sizeof(DoubleList));
	s->_Value = _Val;
	if(Pos==1){
		s->Next = Heap->Next;//ԭ����һ��Ԫ�ر�Ϊ�µ�һ��Ԫ�ص�Next
		Heap->Next = s; //ͷָ��ָ�ĵ�һ��Ԫ�ر�Ϊ�µĵ�һ��Ԫ��
		s->Pre = Heap;//�µ�һ��Ԫ�ص�preָ��ͷָ��
		return Heap;
	}

	int i = 1;
	while(i != Pos){
		p = p->Next;
		i++;
	}//���Ҫ�����λ�ý��p,
	s->Pre = p->Pre;
	s->Next = p;
	p->Pre->Next = s;
	p->Pre = s;
	return Heap;
}

DoubleList *DoubleListDelete(DoubleList *Heap, int Pos)
{
	DoubleList *p;
	int i = 1;
	if(Pos==1)
	{
		Heap->Next = Heap->Next->Next;
		Heap->Next->Pre = Heap;
	}
	while(i != Pos){
		p = p->Next;
		i++;
	}//���Ҫɾ����λ�ý��p
	p->Pre->Next = p->Next;
	p->Next->Pre = p->Pre;
	free(p);
	return Heap;
}

int main(int argc, char const *argv[])
{
	int _size = 5;
	int _Val[] = {1,2,3,4,5};
	DoubleList *Heap = DoubleListInit(_Val,_size);
	Heap = DoubleListInsert(Heap,10,3);
	Heap = DoubleListDelete(Heap,2);
	DoubleList *p = Heap->Next;
	int i;
	for(i=0;i<_size;i++){
		printf("%d \n", p->_Value);
		p = p->Next;
	}
	system("pause");
	return 0;
}
