extern int A;    //����AΪһ���Ѿ�������ⲿ����
fun1(int x)
{
	int y;
	y=A*x;
	return y;
}
fun2(int n)
{
	int i,y=1;
	for(i=1;i<=n;i++)
		y*=A;
	return y;
}