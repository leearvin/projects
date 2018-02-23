main()
{
	enum WEEKDAY {sun,mon,tue,wed,thu,fri,sat}e1,e2,e3,day,sday[7],j;
	int i;
	j=sun;

	e1=sun;
	e2=mon;
	e3=tue;
	printf("%d %d %d\n",e1,e2,e3);   //output : 0 1 2
	for(i=0;i<7;i++,j++)
		sday[i]=j;
	for(i=0;i<=6;i++)
	{
		switch(sday[i])
		{
		case sun:printf("Today is Sunday");break;
		case mon:printf("Today is Monday");break;
		case tue:printf("Today is Tuesday");break;
		case wed:printf("Today is Wedneday");break;
		case thu:printf("Today is Thursday");break;
		case fri:printf("Today is Friday");break;
		case sat:printf("Today is Saturday");break;
		default:break;
		}
	}
}