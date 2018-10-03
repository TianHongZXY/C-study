#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
	int Element;
	struct Node *Next;
}Node_list;

Node_list *ListInit(int *_Val,int _size)//创建链表，返回新链表的头指针 
{
	//int array[_size]; 
	Node_list *head, *s ,*r;
	head = NULL;
	r = NULL;
	int i;
	for(i=0;i<_size;i++){
		s = (Node_list*)malloc(sizeof(Node_list));
		s->Element = _Val[i];
		printf("%d \n",s->Element);
		if(head==NULL) head = s;
		else r->Next = s;
		r=s;
		printf("s的地址：%p \n",s);} 
	if(r != NULL)r->Next == NULL;
	
	
	return head;
}

Node_list *ListInsert(Node_list *Heap, int _Val, int Pos)
{
	Node_list *s;
	Node_list *p;
	p = Heap;
	s = (Node_list*)malloc(sizeof(Node_list));
	s->Element = _Val;
	int i = 0;
	if(Pos == 0){
		s->Next = Heap;
		return s;
	}
	while((i+1) != Pos){
		//printf("P指向的地址为:%p",p); 
		p = p->Next;
		i++;
	}
	printf("p指向的值为：%d",p->Element);
	s->Next = p->Next;
	p->Next = s;
	Node_list *test = Heap;
	for(i=0;i<5;i++){
		printf("插入后地址分别为：%p \n",test);
		test = test->Next;
	}
	
	return Heap;
}

Node_list * ListDelete(Node_list *Heap, int Pos)
{
	Node_list *p;
	p = Heap;
	int i = 0;
	if(Pos == 0)return Heap->Next;
	else{
		while((i+1) != Pos){
			p->Next = p;
		}
	Node_list *q = p->Next;//丢弃p的后继q结点
	p->Next = q->Next;
	//printf("%p \n",Heap);
	return Heap;
	}
}

int main(int argc, char const *argv[])
{
	const int _size = 5;
	int _Val[] = {0,1,2,3,4};
	Node_list *Heap = ListInit(_Val,_size);
	Heap = ListInsert(Heap,10,3);
	//Heap = ListDelete(Heap,1);
	int i;
	Node_list *p = Heap;
	
	for(i=0;i<6;i++){
		printf("%d \n",p->Element);
		//printf("p的地址 %p \n",p);
		p = p->Next;
	}
	return 0;
}
