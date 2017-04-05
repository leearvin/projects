#include <stdio.h>
#define N 10
struct link
{
	int num;
	struct link *next;
};

struct link *delete_node(struct link *head,int num)
{
	
	struct link *cur;    //要删除的节点
	struct link *last;    //要删除节点的前一个节点
	//printf("111");
	if(head==NULL)
	{
		printf("\nempty list\n");
		exit(0);
	}
	cur=head;
	while(num!=cur->num&&cur->next!=NULL)  // (找到num或者到尾部)2个条件 满足任何一个（成为0）  循环结束
	{
		last=cur;          //在结束循环的时候 ml记住的是num前一个单元的地址 
		cur=cur->next;   //下一个循环开始
	}
	if(num==cur->num) //找到了，也是刚才跳出循环的条件之一
	{
		if(head==cur)      //如果第一个节点
			head=cur->next;   //删除头节点
		else
			last->next=cur->next;  //删除当前节点 也就是跳过当前节点
		free(cur);
		printf("delete link node that num is: %d\n",num);
	}else
		printf("node not found\n");
	return (head);
}

struct link * create_link(int n)
{
	struct link *head,*cur,*tail;
	int i;
	for(i=0;i<n;i++)
	{
		cur=(struct link *)malloc(sizeof(struct link));
		if(cur==NULL)
		{
			printf("Memory malloc failure!\n");
			exit(0);
		}
		printf("Pls enter number of No %d:",i);
		scanf("%d",&cur->num);
		if(i==0)    //处理第一个节点
			tail=head=cur;  //第一个节点的时候 头 尾在一起
		else
			tail->next=cur;   //从第二个加点 头还指着头 上一个尾的next 指向着新来尾的cur
		cur->next=NULL;     //新的尾 next=NULL
		tail=cur;             //尾指针 跟进到最新的cur
	}
	return head;

}

void output_link(struct link *head)
{
	struct link *h;
	h=head;
	while(h!=NULL)
	{
		printf("%d   ",h->num);
		h=h->next;
	}
}
void main()
{
	struct link *head;
	head=create_link(N);
	output_link(head);
	head=delete_node(head,5);
	output_link(head);
	
}