#include <stdio.h>
#define N 10
struct link
{
	int num;
	struct link *next;
};

struct link *delete_node(struct link *head,int num)
{
	
	struct link *cur;    //Ҫɾ���Ľڵ�
	struct link *last;    //Ҫɾ���ڵ��ǰһ���ڵ�
	//printf("111");
	if(head==NULL)
	{
		printf("\nempty list\n");
		exit(0);
	}
	cur=head;
	while(num!=cur->num&&cur->next!=NULL)  // (�ҵ�num���ߵ�β��)2������ �����κ�һ������Ϊ0��  ѭ������
	{
		last=cur;          //�ڽ���ѭ����ʱ�� ml��ס����numǰһ����Ԫ�ĵ�ַ 
		cur=cur->next;   //��һ��ѭ����ʼ
	}
	if(num==cur->num) //�ҵ��ˣ�Ҳ�Ǹղ�����ѭ��������֮һ
	{
		if(head==cur)      //�����һ���ڵ�
			head=cur->next;   //ɾ��ͷ�ڵ�
		else
			last->next=cur->next;  //ɾ����ǰ�ڵ� Ҳ����������ǰ�ڵ�
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
		if(i==0)    //�����һ���ڵ�
			tail=head=cur;  //��һ���ڵ��ʱ�� ͷ β��һ��
		else
			tail->next=cur;   //�ӵڶ����ӵ� ͷ��ָ��ͷ ��һ��β��next ָ��������β��cur
		cur->next=NULL;     //�µ�β next=NULL
		tail=cur;             //βָ�� ���������µ�cur
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