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
			t = s; //记录s位置
		}
	t->Next = s; //上一个s的next指向新的s
	s->Pre = t; //新的s的pre指向上一个s
	t = s; //记录新s的位置
	}
	return head; // 返回头指针，注意头指针里不含元素，元素从head->Next开始
}

DoubleList *DoubleListInsert(DoubleList *Heap, int _Val, int Pos)
{
	DoubleList *s, *p;
	p = Heap->Next; //记录第一个元素的位置
	s = (DoubleList*)malloc(sizeof(DoubleList));
	s->_Value = _Val;
	if(Pos==1){
		s->Next = Heap->Next;//原本第一个元素变为新第一个元素的Next
		Heap->Next = s; //头指针指的第一个元素变为新的第一个元素
		s->Pre = Heap;//新第一个元素的pre指向头指针
		return Heap;
	}

	int i = 1;
	while(i != Pos){
		p = p->Next;
		i++;
	}//获得要插入的位置结点p,
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
	}//获得要删除的位置结点p
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
