/*2���������
ѧ���ļ�¼��ѧ�źͳɼ���ɣ�N��ѧ�������������������з���ṹ������s�У�
��������fun�Ĺ����ǣ��ѷ������ѧ�������ݷ���bָ���������У�������͵�ѧ�����ܲ�ֹһ����
����Ӧ���ط������ѧ����������
�ڳ�����»��ߴ�������ȷ�����ݲ����»���ɾ����ʹ����ó���ȷ������������л�ɾ�У�Ҳ���ø��ĳ���ṹ��
����ճ������£�*/
#include <stdio.h>
#define  N  16
typedef struct    //����ṹ
{ 
	char num[10];
	int s;
} STREC;          //�ṹ������
int  fun(STREC  *a,STREC *b)
{  
	int i,n=0,min;
	min=a[0].s;
	for(i=0;i<N;i++)
/**********found***********/
		if(min> a[i].s )
			min=a[i].s;
	for(i=0;i<N;i++)
		if(a[i].s==min)
/**********found***********/
		{
			*(b++)=a[i];
			n++;  
		}
/**********found***********/
	return n;
}

main()
{
	STREC  s[N]=
	{	
		{"GA05",85},{"GA03",76},{"GA02",69},{"Gh04",85},{"GA01",91},{"GA07",72},{"GA08",64},{"GA06",87},{"GA015",85},
		{"GA013",91},{"GA012",64},{"GA014",91},{"GA011",91},{"GA017",64},{"GA018",64},{"GA016",72}
	};
	STREC  h[N];
	int i,n; FILE *out;
	n=fun(s,h);
	printf("The  %d lowest  score:  \n",n);
	for(i=0;i<n;i++)
		printf("%s  %4d\n",h[i].num,h[i].s);
	printf("\n");
	out=fopen("out14.dat","w");
	fprintf(out,"%d\n",n);
	for(i=0;i<n;i++)
		fprintf(out,"%4d\n",h[i].s);
	fclose(out);
}