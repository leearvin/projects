/*给定程序中函数fun的功能是：对形参s所指字符串中下标为奇数的字符按ASCII码大小递增排序，并将排序后下标为奇数的字符取出，
存入形参p所指字符数组中，形成一个新串。
例如，形参s所指字符串为baawrskjghzlicda，执行后p所指字符数组中的字符串应为aachjlsw。
在以下程序的下划线处填入正确的内容并把下划线删除，使程序得出正确结果。不得增行或删行，也不得更改程序结构。
程序填空如下：*/

#include  <stdio.h>
void fun(char  *s,char  *p)
{ 
	int i,j,n,x,t;
	n=0;
	for(i=0;s[i]!='\0';i++)  //计算s内有多少个字符
		n++;
	for(i=1;i<n-2;i=i+2)    //
	{
/**********found**********/
           t=i         ;    //用来记录每个循环内较小的数那个坐标
/**********found**********/
		for(j=i+2;j<n;j=j+2)   //j从i+2开始循环，找到最小的数，t为最小数的坐标
			if(s[t]>s[j])      
				t=j;
		if(t!=i)       //如果t不是i, 怎把最小数换到i的位置 就是当前循环队列的最前面(升序)
		{
			x=s[i]; 
			s[i]=s[t]; 
			s[t]=x; 
		}
	}
	for(i=1,j=0;i<n;i=i+2,j++)   //把奇数位排好升序的元素取出放入p
		p[j]=s[i];
/**********found**********/
	p[j]= '\0'  ;  //做成字符串
}

main()
{ char  s[80]="baawrskjghzlicda",p[50];
printf("\nThe original string is: %s\n",s);
fun(s,p);
printf("\nThe result is:  %s\n",p);
}