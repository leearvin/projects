/*4������Ĵ�
���������к���Creatlink�Ĺ����Ǵ�����ͷ���ĵ���������Ϊ�����������0~m-1��ֵ��
���������Creatlink��ָ����λ�Ĵ���ʹ���ܹ��ó���ȷ�����
������������£�*/
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
	for(i=1;i<=n;i++)   //1��8��Ԫ��
	{  
		s=(NODE  *)malloc(sizeof(NODE));   //���ɶ�̬�ڴ��һ��ָ��s
		s->data=rand()%m;        //��s��ֵ
		printf("%d\n",s->data);
		s->next=p->next;    
		p->next=s;			  
		p=p->next;
	}
/**********found***********/
	return h;     //����header
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