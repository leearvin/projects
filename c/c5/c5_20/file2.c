extern int A;    //声明A为一个已经定义的外部变量
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