#include<stdio.h>
#include<stdlib.h>

typedef struct _nobe {
	int value;
	struct _nobe*next;
	
}Node;

int main(void)
{	Node *p=NULL;
	Node * head =NULL;
	int number;
	do {int i=0;
		scanf("%d",&number);
		if (number != -1){
			p=(Node*)malloc(sizeof(Node));
			p->value=number;
			p->next=NULL;
			
			Node *last =head;
			if(last){
				while(last->next){
					last = last->next;
				}
				last->next = p;
			}else {
				head = p;
			}
		}
	
	}while(number != -1);
	p=head;
	 while(p->next!=NULL) {
	 
          {  
          printf("%d",p->value);  
          p=p->next;  
          }
          //printf("%d\n",p->value);
}

	return 0;
}
