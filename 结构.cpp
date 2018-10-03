#include<stdio.h>
struct point*getStruct(struct point*);
void output(struct point);
void print(const struct point *p);
struct point {
	int x;
	int y;
};
int main()
{
	struct point y={0,0};
	getStruct(&y);
	output(y);
	output(*getStruct(&y));
	print(getStruct(&y));
	getStruct(&y)->x =0;
	printf("%d",y.x);
	return 0;
} 
struct point *getStruct(struct point*p)
{
	scanf("%d",&p->x);
	scanf("%d",&p->y);
	printf("getStruct is %d,%d\n",p->x,p->y);
	return p;
}

void output(struct point p)
{
	printf("output is %d,%d\n",p.x,p.y);
}

void print(const struct point *p)
{
	printf("print is %d,%d\n",p->x,p->y);
}
