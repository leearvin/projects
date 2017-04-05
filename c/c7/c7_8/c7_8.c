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
	h=head;   //��һ���µ�ָ�� ָ��head, ������������ ����Ӱ���ⲿָ��head��ֵ
	if(h==NULL)
		printf("the list is empty!\n");
	while(h!=NULL)   //h��ֵ��
	{
		printf("%d %s\n",h->num,h->name);
		h=h->next;   //�Լ�ָ����һ�����굥Ԫ
	}

}  //end of output list

//insert node into a list

struct person * insert_node(struct person *head,struct person * newnode)
{
	struct person *cur;  //�������;
	struct person *m2;   //����m2֮ǰ
	struct person *m1;   //����m1֮��
	m2=head;
	cur=newnode;
	//��λ����λ��
	if(head==NULL)  //������
	{
		head=cur;
		cur->next=NULL;
	}else        //���ǿձ��� ��ʼ����
	{
		//���Ҳ���㣬num���ź�˳��ģ�����˳����룬���cur->num ��m2�Ĵ� ��ô�ͷŵ����m2ǰ 
		while((cur->num > m2->num)&&(m2->next!=NULL))   
		{
			m1=m2;
			m2=m2->next;   //��ʼѭ��
		}
	
	//�жϲ���λ�á����cur-<num �ȵ�ǰm2->С�Ļ�
		if(cur->num<=m2->num)  
		{
			if(m2==head)   //�ǲ��Ǳ�ͷ�ڵ�
			{
				head=cur;
				cur->next=m2;
			}else{       //���������м�
				m1->next=cur;
				cur->next=m2;
			}
		}else{     //��������β��
			m2->next=cur;
			cur->next=NULL;
		}
	}   
	printf("Insert a new node success!\n");
	return (head);  //����ͷ��ַ

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
			tail=head=cur; //��һ���ڵ� ��ͷ β����һ��
		else
			tail->next=cur;
		cur->next=NULL;
		tail=cur;
		}
	return(head);
} //end of creat_list

//����ѧ�� ɾ���ڵ�
struct person * delete_node(struct person *head, long num)
{
	struct person *cur;    //ָ��Ҫɾ���Ľڵ�
	struct person *m1;    //ָ��cur��ǰһ���ڵ�
	if(head==NULL) 
	{
		printf("\n List is empty\n");
		return(head);
	}
	cur=head;
	//�������� �ҵ���Ӧ�Ľڵ�
	while(num!=cur->num&&cur->next!=NULL)   //��λnum��ŵĽڵ���ߵ�����β��
	{
		m1=cur;       //��¼��һ���ڵ�
		cur=cur->next;   //�Լ�ָ����һ���ڵ㣬��ʼѭ��
	}
	//�ҵ��ڵ� ɾ������
	if(num==cur->num)   //�ҵ�
	{
		if(cur==head)    //��Ȼ��ͷ�ڵ�
			head=cur->next;
		else
			m1->next=cur->next;  //ɾ���ҵ��Ľڵ�
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
	//clrscr();      //�����Ļ
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
				scanf("%ld %s",&nw->num,nw->name);   //nw->numԪ�غ�nw->name �ַ�������
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

