#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <stdlib.h>
//#define NULL 0

struct person
{
	long num;
	char name[30];
	struct person * next;
};


//output a list

void output_list(struct person *head)
{
	struct person *h;
	h=head;   //用一个新的指针 指向head, 这样操作数据 不会影响外部指针head的值
	if(h==NULL)
		printf("the list is empty!\n");
	while(h!=NULL)   //h有值？
	{
		printf("%d %s\n",h->num,h->name);
		h=h->next;   //自己指向下一个连标单元
	}

}  //end of output list

//insert node into a list

struct person * insert_node(struct person *head,struct person * newnode)
{
	struct person *cur;  //待插入点;
	struct person *m2;   //插入m2之前
	struct person *m1;   //插入m1之后
	m2=head;
	cur=newnode;
	//定位插入位置
	if(head==NULL)  //空链表
	{
		head=cur;
		cur->next=NULL;
	}else        //不是空表链 开始操作
	{
		//查找插入点，num是排好顺序的，按着顺序插入，如果cur->num 比m2的大 那么就放到这个m2前 
		while((cur->num > m2->num)&&(m2->next!=NULL))   
		{
			m1=m2;
			m2=m2->next;   //开始循环
		}
	
	//判断插入位置。如果cur-<num 比当前m2->小的话
		if(cur->num<=m2->num)  
		{
			if(m2==head)   //是不是表头节点
			{
				head=cur;
				cur->next=m2;
			}else{       //插在链表中间
				m1->next=cur;
				cur->next=m2;
			}
		}else{     //插在链表尾部
			m2->next=cur;
			cur->next=NULL;
		}
	}   
	printf("Insert a new node success!\n");
	return (head);  //返回头地址

}

//create a list
struct person *creatlist(int n)
{
	struct person *head,*cur,*tail;
	int i;
	for(i=0;i<n;i++)
	{
		cur=(struct person *)malloc(sizeof(struct person));
		if(cur==NULL)
		{
			printf("memory malloc failur.");
			exit(0);
		}

		printf("Pls. input number and name\n");
		scanf("%d %s",&cur->num,cur->name);
		if(i==0)
			tail=head=cur; //第一个节点 的头 尾都是一个
		else
			tail->next=cur;
		cur->next=NULL;
		tail=cur;
		}
	return(head);
} //end of creat_list

//按着学号 删除节点
struct person * delete_node(struct person *head, long num)
{
	struct person *cur;    //指向要删除的节点
	struct person *m1;    //指向cur的前一个节点
	if(head==NULL) 
	{
		printf("\n List is empty\n");
		return(head);
	}
	cur=head;
	//遍历链表 找到对应的节点
	while(num!=cur->num&&cur->next!=NULL)   //定位num序号的节点或者到链表尾部
	{
		m1=cur;       //记录上一个节点
		cur=cur->next;   //自己指向下一个节点，开始循环
	}
	//找到节点 删除操作
	if(num==cur->num)   //找到
	{
		if(cur==head)    //居然是头节点
			head=cur->next;
		else
			m1->next=cur->next;  //删除找到的节点
		free(cur);    //
		printf("delete list node whose num is: %ld\n",num);
	}else
		printf("node not found\n");
	return (head);
}

//main
void main()
{
	//struct person * delete_node(struct person *head, long num);
	//struct person *creatlist(int n);
	//struct person * insert_node(struct person *head,struct person * newnode);
	//void output_list(struct person *head);

	struct person *nw;    //new node
	struct person *head;   //head of link
	long delete_num;       //code needed to delete
	int ch;                //charator from the keyboard
	//clrscr();      //清除屏幕
	system("cls");
	printf("Welcome use the list demo program\n");
	printf("Begin to ceate list have three nodes:\n");
	head=creatlist(3);
	do
	{
		printf("------------------------\n");
		printf("Pls. make a choice below:\n");
		printf("1.Show list's all nodes\n");
		printf("2.Insert a new node\n");
		printf("3.Delete a node\n");
		printf("4.Exit\n");
		printf("Pls. Input Your Choice:\n");
		printf("-------------------------\n");
		ch=getchar();
		switch(ch)
		{
			case '1':
				output_list(head);
				break;
			case '2':
				nw=(struct person *)malloc(sizeof(struct person));
				if(nw==NULL)
				{
					printf("Memory malloc failure.\n");
					exit(0);
				}
				printf("----------------------\n");
				printf("Pls input number and name for insert!\n");
				scanf("%ld %s",&nw->num,nw->name);   //nw->num元素和nw->name 字符串数组
				head=insert_node(head,nw);
				break;
			case '3':
				printf("----------------------\n");
				printf("Pls input node's number for delete\n");
				scanf("%ld",&delete_num);
				head=delete_node(head,delete_num);
				break;
			case '4':
				printf("program exit....done!\n");
				exit(0);
				break;
			default:
				printf("The num you input should 1-4!!!:\n");
				break;

		}

	}while(1);



}	

