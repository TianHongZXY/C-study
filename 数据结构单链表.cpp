#include<stdio.h>
#include<stdlib.h>

struct Node_list{
	int Element;
	Node_list *Next;
};

Node_list *ListInit(int *_Val,int _size)//初始化列表 
{
	//int array[_size]; 
	Node_list *head, *s ,*r;
	head = NULL;
	r = NULL;
	int i;
	for(i=0;i<_size;i++){
		s = (Node_list*)malloc(sizeof(Node_list));
		s->Element = _Val[i];//将_Val数组的元素放入链表 
		if(head==NULL) head = s;
		else r->Next = s;
		r=s;}
	if(r != NULL)r->Next = NULL;
	return head;//返回链表头指针 
}

Node_list *ListInsert(Node_list *Heap, int _Val, int Pos)
{
	Node_list *s;
	Node_list *p;
	p = Heap;
	s = (Node_list*)malloc(sizeof(Node_list));
	s->Element = _Val;
	int i = 0;
	if(Pos == 0){//如果直接插入在链表头，即0位置 
		s->Next = Heap;//表头变为s，s的next指向原表头 
		return s;//返回新表头s 
	}
	while((i+1) != Pos){//如果插入不在表头 
		p = p->Next;//得到要插入位置的直接前趋后跳出循环 
		i++;
	}
	s->Next = p->Next;//将要插入位置的直接前趋的next变为s的next 
	p->Next = s;//要插入位置的直接前趋的next指向s，即完成插入 
	return Heap;//返回头指针 
}

Node_list * ListDelete(Node_list *Heap, int Pos)
{
	Node_list *p;
	p = Heap;
	int i = 0;
	if(Pos == 0)return Heap->Next;//如果删除0位置，返回原来头指针的next 
	else{
		while((i+1) != Pos){
			p = p->Next;//获得要删除的位置的直接前趋 
		}
	Node_list *q = p->Next;//要删除的位置的直接前趋指向 要删除位置的next 
	p->Next = q->Next;
	return Heap;
	}
}

int main(int argc, char const *argv[])
{
	const int _size = 5;
	int _Val[] = {0,1,2,3,4};//初始化数组_Val 
	Node_list *Heap = ListInit(_Val,_size);
	Heap = ListInsert(Heap,10,3);//在位置3插入10，即在3前面插入10 
	Heap = ListDelete(Heap,1);//删除位置1，即删除1 
	int i;
	Node_list *p = Heap;
	for(i=0;i<5;i++){
		printf("%d \n",p->Element);
		p = p->Next;
	}
	system("pause");
	return 0;
}
