/*4．程序改错
给定程序中函数Creatlink的功能是创建带头结点的单向链表，并为各结点数据域赋0~m-1的值。
请改正函数Creatlink中指定部位的错误，使它能够得出正确结果。
需改正程序如下：*/
#include <stdio.h>
#include <stdlib.h>
typedef struct aa
{ 
	int data;
	struct  aa  *next;
} NODE;
NODE *Creatlink(int  n,int  m)
{ 
	NODE  *h=NULL,*p,*s;
	int  i;
/**********found***********/
	p=(NODE *)malloc(sizeof(NODE));
	h=p;   //header
	p->next=NULL;
	for(i=1;i<=n;i++)   //1到8个元素
	{  
		s=(NODE  *)malloc(sizeof(NODE));   //生成动态内存的一个指针s
		s->data=rand()%m;        //给s赋值
		printf("%d\n",s->data);
		s->next=p->next;    
		p->next=s;			  
		p=p->next;
	}
/**********found***********/
	return h;     //返回header
}
outlink(NODE  *h)
{ 
	NODE  *p;
	p=h->next;
	printf("\n\nTHE  LIST:\n\n  HEAD");
	while(p)
	{ 
		printf("->%d",p->data);
		p=p->next;
	}
	printf("\n");
}

main()
{ 
	NODE  *head;
	head=Creatlink(8,22);
	outlink(head);
}